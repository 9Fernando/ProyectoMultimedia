using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.N3DS;

public class orbitauto : MonoBehaviour
{
	[Header("Orbita")]
	public Transform villain;               // centro
	public float orbitRadius = 10f;         // radio nominal de la órbita
	public float autoOrbitSpeed = 0.5f;     // vueltas por segundo (fracción -> convertido a rad/s)

	[Header("Movimiento local (plano tangente)")]
	public float localMoveRadius = 1.5f;    // radio máximo del movimiento local en el plano tangente
	public float localMoveSpeed = 4.0f;     // sensibilidad para teclado/arrastre
	public float minHeight = -1.5f;         // altura mínima relativa al orbital point
	public float maxHeight = 3.0f;          // altura máxima relativa al orbital point

	[Header("Suavizado")]
	public float angleLerpSpeed = 10f;
	public float positionLerpSpeed = 10f;

	// estado interno
	private float baseAngle = 0f;           // ángulo automático (radianes)
	private float currentAngle = 0f;        // ángulo suavizado
	private Vector2 localOffset = Vector2.zero;       // (x, y) en coordenadas del plano tangente
	private Vector2 targetLocalOffset = Vector2.zero;

	void Start()
	{
		if (villain == null)
		{
			enabled = false;
			return;
		}

		// inicialización
		baseAngle = 0f;
		currentAngle = 0f;
		localOffset = new Vector2(0f, minHeight);      // X = 0, Y = altura mínima
		targetLocalOffset = new Vector2(0f, minHeight);
	}

	void Update()
	{
		// 1) Avanza la órbita automáticamente
		baseAngle += autoOrbitSpeed * 2f * Mathf.PI * Time.deltaTime;

		// 2) lee input (keyboard/axes + mouse/drag)
		ReadInput();

		// 3) suaviza ángulo y offsets
		currentAngle = Mathf.LerpAngle(currentAngle * Mathf.Rad2Deg, baseAngle * Mathf.Rad2Deg, angleLerpSpeed * Time.deltaTime) * Mathf.Deg2Rad;
		localOffset = Vector2.Lerp(localOffset, targetLocalOffset, positionLerpSpeed * Time.deltaTime);

		// 4) calcula punto orbital base (sin offset local)
		Vector3 radial = new Vector3(Mathf.Sin(currentAngle), 0f, Mathf.Cos(currentAngle)).normalized; // vector horizontal radial
		Vector3 orbitalPoint = villain.position + radial * orbitRadius;

		// 5) construir base ortonormal para el plano tangente en orbitalPoint
		Vector3 upGuess = Vector3.up;
		if (Mathf.Abs(Vector3.Dot(radial, upGuess)) > 0.95f)
			upGuess = Vector3.forward;

		Vector3 tangentA = Vector3.Cross(upGuess, radial).normalized; // eje "x" del plano tangente
		Vector3 tangentB = Vector3.Cross(radial, tangentA).normalized; // eje "y" del plano tangente

		// 6) aplicar offset local en el plano tangente
		Vector3 localWorldOffset = tangentA * localOffset.x + tangentB * localOffset.y;

		// 7) limitar altura y horizontal por separado
		float horizontal = Vector3.Dot(localWorldOffset, tangentA);
		float vertical = Vector3.Dot(localWorldOffset, tangentB);

		horizontal = Mathf.Clamp(horizontal, -localMoveRadius, localMoveRadius);
		vertical = Mathf.Clamp(vertical, minHeight, maxHeight);

		localWorldOffset = tangentA * horizontal + tangentB * vertical;

		Vector3 finalPos = orbitalPoint + localWorldOffset;

		// 8) asignar transform
		transform.position = finalPos;

		// Calcular vector hacia el villano solo en horizontal (ignorar diferencia de altura)
		Vector3 directionToVillain = villain.position - transform.position;
		directionToVillain.y = 0f;

		if (directionToVillain.sqrMagnitude > 0.001f)
		{
			Quaternion targetRotation = Quaternion.LookRotation(directionToVillain, Vector3.up);
			transform.rotation = targetRotation;
		}
	}

	private void ReadInput()
	{
		// Leer Circle Pad de la 3DS
		Vector2 circlePad = UnityEngine.N3DS.GamePad.CirclePad;

		// --- teclado/ascii/axes para testing en editor ---
		//float kx = Input.GetAxis("Horizontal"); // A/D, Left/Right 
		//float ky = Input.GetAxis("Vertical");   // W/S, Up/Down

		float kx = circlePad.x; // izquierda/derecha
		float ky = circlePad.y; // arriba/abajo

		// mover targetLocalOffset según el Circle Pad
		targetLocalOffset += new Vector2(-kx, ky) * (localMoveSpeed * Time.deltaTime);

		// limitar altura (vertical) y horizontal
		targetLocalOffset.y = Mathf.Clamp(targetLocalOffset.y, minHeight, maxHeight);
		targetLocalOffset.x = Mathf.Clamp(targetLocalOffset.x, -localMoveRadius, localMoveRadius);
	}

	public void SetHeightLimits(float newMin, float newMax)
	{
		minHeight = newMin;
		maxHeight = newMax;

		// Asegurarse de que el offset actual respete los nuevos límites
		targetLocalOffset.y = Mathf.Clamp(targetLocalOffset.y, minHeight, maxHeight);
		localOffset.y = Mathf.Clamp(localOffset.y, minHeight, maxHeight);
	}
}
