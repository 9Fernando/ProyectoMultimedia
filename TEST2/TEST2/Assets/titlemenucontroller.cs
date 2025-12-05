using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.N3DS;
using UnityEngine.UI;

public class titlemenucontroller : MonoBehaviour {

	[Header("UI Referencias")]
	public Image imagenTextoStart;
	public RectTransform imagenFlotante;

	[Header("Configuración Idle")]
	public float velocidadParpadeo = 2.0f;
	public float alfaMinimo = 0.2f;
	public float alfaMaximo = 1.0f;


	[Header("Movimiento vertical imagen")]
	public float amplitudFlotante = 10f;
	public float velocidadFlotante = 1f;

	[Header("Configuración Confirmación")]
	public float velocidadEscala = 15.0f;
	public float escalaMaxima = 1.2f;

	[Header("Audio")]
	public AudioSource audioSource;
	public AudioClip sfxStart;

	private bool haPresionadoStart = false;
	private Vector2 posInicialFlotante;

	void Start()
	{
		if (imagenFlotante != null)
			posInicialFlotante = imagenFlotante.anchoredPosition;
	}

	void Update()
	{
		if (!haPresionadoStart)
		{
			AnimarIdle();
			AnimarFlotante();

			// Detectar botón Start
			bool pressStart = Input.GetKeyDown(KeyCode.Return);

			if (pressStart)
			{
				if (audioSource != null && sfxStart != null)
					audioSource.PlayOneShot(sfxStart);
				
				StartCoroutine(SecuenciaInicio());
			}
		}
	}

	void AnimarFlotante()
	{
		if (imagenFlotante == null) return;

		float offset = Mathf.Sin(Time.time * velocidadFlotante * Mathf.PI * 2f) * amplitudFlotante;
		imagenFlotante.anchoredPosition = new Vector2(posInicialFlotante.x, posInicialFlotante.y + offset);
	}

	void AnimarIdle()
	{
		if (imagenTextoStart == null) return;

		// Usamos PingPong para oscilar entre 0 y 1
		float t = Mathf.PingPong(Time.time * velocidadParpadeo, 1.0f);

		// Interpolamos entre min y max alpha
		float alfaActual = Mathf.Lerp(alfaMinimo, alfaMaximo, t);

		// Aplicamos el color
		Color c = imagenTextoStart.color;
		c.a = alfaActual;
		imagenTextoStart.color = c;

		// Asegurar escala normal
		imagenTextoStart.transform.localScale = Vector3.one; 
	}

	IEnumerator SecuenciaInicio()
	{
		haPresionadoStart = true;

		// Poner alfa al 100% inmediatamente
		if (imagenTextoStart != null)
		{
			Color c = imagenTextoStart.color;
			c.a = 1.0f;
			imagenTextoStart.color = c;
		}

		// Agrandar y volver
		float tiempoAnimacion = 0.10f; // Duración de la expansión 
		float escalaObjetivo = 1.5f;   // Tamaño máximo
		float tiempoActual = 0f;

		Vector3 escalaOriginal = Vector3.one;
		Vector3 escalaGrande = Vector3.one * escalaObjetivo;

		// Crecer
		while (tiempoActual < tiempoAnimacion)
		{
			tiempoActual += Time.deltaTime;
			float progreso = tiempoActual / tiempoAnimacion;
			// Usamos SmoothStep para que sea más suave
			imagenTextoStart.transform.localScale = Vector3.Lerp(escalaOriginal, escalaGrande, Mathf.SmoothStep(0, 1, progreso));
			yield return null;
		}

		// Encoger (Volver a normal)
		tiempoActual = 0f;
		while (tiempoActual < tiempoAnimacion)
		{
			tiempoActual += Time.deltaTime;
			float progreso = tiempoActual / tiempoAnimacion;
			imagenTextoStart.transform.localScale = Vector3.Lerp(escalaGrande, escalaOriginal, Mathf.SmoothStep(0, 1, progreso));
			yield return null;
		}

		// Asegurar escala final perfecta
		imagenTextoStart.transform.localScale = escalaOriginal;

		// Pequeña pausa para que el usuario asimile el feedback
		yield return new WaitForSeconds(0.5f);

		// Cambiar escena
		scenetransition.instancia.CambiarEscena("intro");
	}
}
