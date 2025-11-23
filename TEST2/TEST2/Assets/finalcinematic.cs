using System.Collections;
using UnityEngine;
using UnityEngine.N3DS;

public class finalcinematic : MonoBehaviour
{
	[Header("Referencias Escena")]
	public orbitauto playerOrbitScript; // Para desactivarlo
	public followbehind cameraFollowScript; // Para desactivarlo
	public Camera upperCamGameplay; // La cámara normal (UpperLCD)
	public Camera upperCamCinematic; // La cámara nueva para el final (UpperLCD2)
	public Animator playerAnimator;

	[Header("Configuración Ascenso")]
	public float alturaFinalAscenso = 25f; // Altura Y a la que subirá
	public float velocidadAscenso = 3.0f;
	public Transform puntoFijoCamaraAscenso; // Un Empty object arriba de la torre para mirar desde allí

	// Variables internas
	private bool esperandoInput = false;
	private int etapaQTE = 0; // 0=Nada, 1=Fase1, 2=Fase2

	// Esta función la llama floorscript.cs al romper el último piso
	public void StartCinematic()
	{
		// 1. Desactivar controles y scripts de gameplay
		playerOrbitScript.enabled = false;
		cameraFollowScript.enabled = false;

		// 2. Cambiar cámaras
		upperCamGameplay.enabled = false;
		upperCamCinematic.enabled = true;

		// 3. Colocar cámara cinemática
		if (puntoFijoCamaraAscenso != null) {
			upperCamCinematic.transform.position = puntoFijoCamaraAscenso.position;
			upperCamCinematic.transform.LookAt(playerOrbitScript.transform);
		}

		StartCoroutine(SecuenciaAscenso());
	}

	private IEnumerator SecuenciaAscenso()
	{
		Transform playerT = playerOrbitScript.transform;
		float alturaObjetivo = playerT.position.y + alturaFinalAscenso;

		// Fase de Ascenso
		while (playerT.position.y < alturaObjetivo)
		{
			// Subir recto
			playerT.position += Vector3.up * velocidadAscenso * Time.deltaTime;

			// Hacer que la cámara siga mirando al jugador
			upperCamCinematic.transform.LookAt(playerT.position);

			yield return null;
		}

		// Al llegar arriba: Preparar QTE
		IniciarQTE();
	}

	private void IniciarQTE()
	{
		// Mover cámara a primer plano
		Transform playerT = playerOrbitScript.transform;

		// Posición frente al jugador
		upperCamCinematic.transform.position = playerT.position + (playerT.forward * 5.5f) + (Vector3.up * 0.8f);
		upperCamCinematic.transform.LookAt(playerT.position + Vector3.up * 0.5f);

		// Iniciar Animación
		playerAnimator.enabled = true;

		playerAnimator.SetFloat("VelocidadEspada", 0f); 

		playerAnimator.Play("EspadaAnim", 1, 0f);

	}

	void Update()
	{
		// Lógica del QTE: Si estamos pausados esperando input
		if (esperandoInput)
		{
			// Comprobar L + R 
			bool lPressed = Input.GetKey(KeyCode.L) || GamePad.GetButtonHold(N3dsButton.L);
			bool rPressed = Input.GetKey(KeyCode.R) || GamePad.GetButtonHold(N3dsButton.R);

			if (lPressed && rPressed)
			{
				ContinuarAnimacion();
			}
		}
	}

	// --- MÉTODOS PARA EVENTOS DE ANIMACIÓN ---

	public void PausarAnimacion()
	{
		playerAnimator.SetFloat("VelocidadEspada", 0f);
		esperandoInput = true;
	}

	public void ContinuarAnimacion()
	{
		playerAnimator.SetFloat("VelocidadEspada", 1f);
		esperandoInput = false;
		etapaQTE++;
	}
}