using System.Collections;
using UnityEngine;
using UnityEngine.N3DS;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class finalcinematic : MonoBehaviour {
	[Header("Referencias Escena")]
	public orbitauto playerOrbitScript;
	public followbehind cameraFollowScript;
	public Camera upperCamGameplay;
	public Camera upperCamCinematic;
	public Animator playerAnimator;

	[Header("Configuración Ascenso")]
	public float alturaFinalAscenso = 25f;
	public float velocidadAscenso = 3.0f;
	public Transform puntoFijoCamaraAscenso;

	[Header("Fase Caída y Tapa")]
	public Transform puntoMitadTorre; // Empty donde se congela al caer
	public Transform puntoSueloFinal; // Empty donde aparece tras abrir la tapa
	public GameObject torreEntera;    // Padre de la torre para hundirla
	public AudioSource audioSource;   // Para el sonido final
	public AudioClip sonidoFinal;

	[Header("UI Imagen Final")]
	public GameObject imagenPantallaSuperior;
	public GameObject imagenPantallaInferior;

	[Header("Set Caída Infinita")]
	public GameObject setCaidaFake;      // Objeto padre del set 2D
	public Transform puntoSpawnCaida;    // Donde aparece el player en el set
	public Camera camaraCaidaLateral;    // Cámara lateral del set

	[Header("UI Pantalla Inferior Ascenso")]
	public GameObject canvasInferiorAscenso;
	public CanvasGroup canvasInferiorGroup;
	public GameObject imagenAvisoLR;
	public GameObject imagenAvisoTapa;
	public GameObject canvasInferiorBorde;

	[Header("Configuración Parpadeo")]
	public float velocidadParpadeo = 2.0f;
	public float alfaMinimo = 0.2f;
	public float alfaMaximo = 1.0f;
	private Coroutine parpadeoRoutine;

	[Header("UI Final Victoria")]
	public GameObject canvasSuperiorFinal;      // Canvas de la pantalla superior
	public CanvasGroup canvasSuperiorGroup;     // CanvasGroup del superior
	public UnityEngine.UI.Image botonVolverTitle; // imagen/botón dentro del canvas inferior
	public float duracionFadeBoton = 1.0f;
	public sparkledestroy sparkleDestroyScript;

	[Header("Audio Música")]
	public AudioSource audioMusica;
	public AudioClip musicaBase;        // loop al empezar gameplay
	public AudioClip musicaPiso2;       // cuando se rompe el piso 2
	public AudioClip musicaVictoria;    // cuando aparece texto de victoria

	[Header("Audio FX")]
	public AudioSource audioFx;
	public AudioClip sfxUnoyDos;          // por cada L+R
	public AudioClip sfxTres; // al final de la animacion
	public AudioClip sfxFin; // enganchar la espada


	// Variables internas
	private bool esperandoInput = false;
	private int etapaQTE = 0; // 0=Nada, 1=Fase1, 2=Fase2...

	// Variables Tapa
	private bool esperandoCierreTapa = false;
	private bool haCerradoTapa = false;

	// Inicialización para asegurar estado correcto de cámaras
	void Start()
	{
		if (upperCamCinematic != null) upperCamCinematic.enabled = false;
		if (upperCamGameplay != null) upperCamGameplay.enabled = true;
		if (audioSource != null) audioSource.ignoreListenerPause = true;

		if (audioMusica != null && musicaBase != null)
		{
			audioMusica.clip = musicaBase;
			audioMusica.loop = true;
			audioMusica.Play();
		}
	}

	public void StartCinematic()
	{
		if (sparkleDestroyScript != null)
			sparkleDestroyScript.enabled = false;
		
		// Desactivar controles
		playerOrbitScript.enabled = false;
		cameraFollowScript.enabled = false;

		// Cambiar cámaras
		upperCamGameplay.enabled = false;
		upperCamCinematic.enabled = true;
		upperCamCinematic.GetComponent<Camera>().enabled = true;

		// --- ACTIVAR CANVAS INFERIOR ---
		if (canvasInferiorAscenso != null) 
		{
			canvasInferiorAscenso.SetActive(true);

			// Si tenemos el grupo, iniciamos el fade
			if (canvasInferiorGroup != null)
			{
				canvasInferiorGroup.alpha = 0f; // Asegurar que empieza invisible
				StartCoroutine(FadeInCanvasInferior());
			}
		}

		// Colocar cámara
		if (puntoFijoCamaraAscenso != null)
		{
			upperCamCinematic.transform.position = puntoFijoCamaraAscenso.position;
			upperCamCinematic.transform.LookAt(playerOrbitScript.transform);
		}

		StartCoroutine(SecuenciaAscenso());
	}

	private IEnumerator FadeInCanvasInferior()
	{
		float duracion = 1.0f;
		float t = 0f;

		while (t < 1f)
		{
			t += Time.deltaTime / duracion;
			canvasInferiorGroup.alpha = Mathf.Lerp(0f, 1f, t);
			yield return null;
		}
		canvasInferiorGroup.alpha = 1f;
	}

	private IEnumerator SecuenciaAscenso()
	{
		Transform playerT = playerOrbitScript.transform;
		float alturaObjetivo = playerT.position.y + alturaFinalAscenso;

		while (playerT.position.y < alturaObjetivo)
		{
			playerT.position += Vector3.up * velocidadAscenso * Time.deltaTime;
			upperCamCinematic.transform.LookAt(playerT.position);
			yield return null;
		}

		IniciarQTE();
	}

	private void IniciarQTE()
	{
		Transform playerT = playerOrbitScript.transform;

		// Posición cámara primer plano
		upperCamCinematic.transform.position = playerT.position + (playerT.forward * 5.5f) + (Vector3.up * 0.8f);
		upperCamCinematic.transform.LookAt(playerT.position + Vector3.up * 0.5f);

		// Iniciar Animación congelada
		playerAnimator.enabled = true;
		playerAnimator.SetFloat("VelocidadEspada", 0f);
		playerAnimator.Play("EspadaAnim", 1, 0f);

	}

	void Update()
	{

		// Saltar directamente al Ascenso
		//if (Input.GetKeyDown(KeyCode.X))
		//{
		//	StartCinematic();
		//}

		if (Input.GetKeyDown(KeyCode.Y))
		{
			OnApplicationPause(true);   // Simular cierre
		}
		if (Input.GetKeyDown(KeyCode.B))
		{
			OnApplicationPause(false);  // Simular apertura
		}

		// Lógica QTE: Esperando L+R
		if (esperandoInput)
		{
			bool lPressed = Input.GetKey(KeyCode.L) || GamePad.GetButtonHold(N3dsButton.L);
			bool rPressed = Input.GetKey(KeyCode.R) || GamePad.GetButtonHold(N3dsButton.R);

			if (lPressed && rPressed)
			{
				ContinuarAnimacion();
			}
		}
	}

	// --- MÉTODOS PARA EVENTOS DE ANIMACIÓN ---

	// Evento intermedio: Pausa la espada y espera input
	public void PausarAnimacion()
	{
		playerAnimator.SetFloat("VelocidadEspada", 0f);
		esperandoInput = true;
		ActivarParpadeo(imagenAvisoLR);
	}

	// Llamado al pulsar L+R
	public void ContinuarAnimacion()
	{
		audioFx.clip = sfxUnoyDos;
		audioFx.Play();
		playerAnimator.SetFloat("VelocidadEspada", 1f);
		esperandoInput = false;
		etapaQTE++;
		DetenerParpadeo();

		if (etapaQTE == 3)
		{
			audioFx.clip = sfxTres;
			audioFx.Play();
		}
	}
		
		
	// Se ejecutará cuando termine toda la animación de la espada tras el último input
	public void EventoFinAnimacion()
	{
		audioFx.clip = sfxFin;
		audioFx.Play();

		IniciarCaidaHaciaTorre();
	}

	// --- FASE DE CAÍDA ---

	public void IniciarCaidaHaciaTorre()
	{
		StartCoroutine(SecuenciaSaltoYCaida());
	}

	private IEnumerator SecuenciaSaltoYCaida()
	{
		// --- Salto hacia pantalla/torre ---
		float tiempoSalto = 0.5f;
		float t = 0;
		Vector3 inicio = playerOrbitScript.transform.position;
		Vector3 destino = inicio + (playerOrbitScript.transform.forward * 5f) + (Vector3.down * 1f); 

		while (t < 1f)
		{
			t += Time.deltaTime / tiempoSalto;
			playerOrbitScript.transform.position = Vector3.Lerp(inicio, destino, t);
			yield return null;
		}

		yield return new WaitForSeconds(0.5f);

		// --- Caída Infinita ---

		// Apagar cámara actual
		upperCamCinematic.enabled = false;

		// Encender set y cámara lateral
		if (setCaidaFake != null) setCaidaFake.SetActive(true);
		if (camaraCaidaLateral != null) camaraCaidaLateral.enabled = true;

		// Teletransportar player al set
		playerOrbitScript.transform.position = puntoSpawnCaida.position;
		playerOrbitScript.transform.rotation = puntoSpawnCaida.rotation;

		// Esperar un momento para que se vea la velocidad
		yield return new WaitForSeconds(0.5f);

		// --- Esperar Tapa ---
		esperandoCierreTapa = true;
		ActivarParpadeo(imagenAvisoTapa);

	}

	private IEnumerator AnimarParpadeoGradual(GameObject objetoConImagen)
	{
		Image imagen = objetoConImagen.GetComponent<Image>();
		if (imagen == null) yield break;

		objetoConImagen.SetActive(true);
		imagen.transform.localScale = Vector3.one;

		while (true)
		{
			float t = Mathf.PingPong(Time.time * velocidadParpadeo, 1.0f);
			float alfaActual = Mathf.Lerp(alfaMinimo, alfaMaximo, t);

			Color c = imagen.color;
			c.a = alfaActual;
			imagen.color = c;

			yield return null;
		}
	}

	private void ActivarParpadeo(GameObject objeto)
	{
		DetenerParpadeo();

		if (objeto != null)
		{
			parpadeoRoutine = StartCoroutine(AnimarParpadeoGradual(objeto));
		}
	}

	private void DetenerParpadeo()
	{
		if (parpadeoRoutine != null)
		{
			StopCoroutine(parpadeoRoutine);
			parpadeoRoutine = null;
		}

		// Apagar ambas imágenes para limpiar
		if (imagenAvisoLR != null) imagenAvisoLR.SetActive(false);
		if (imagenAvisoTapa != null) imagenAvisoTapa.SetActive(false);
	}



	// Detecta suspensión (Sleep Mode)
	void OnApplicationPause(bool pauseStatus)
	{
		if (esperandoCierreTapa)
		{
			if (pauseStatus == true) // Cerrando
			{
				haCerradoTapa = true;

			}
			else if (pauseStatus == false) // Se ha reanudado (Tapa abierta)
			{
				if (haCerradoTapa)
				{
					DetenerParpadeo();
					esperandoCierreTapa = false;
					if (audioSource != null) {
						audioSource.PlayOneShot(sonidoFinal);
					}
					StartCoroutine(SecuenciaImagenYFinal());
				}
			}
		}
	}

	private IEnumerator SecuenciaImagenYFinal()
	{
		// --- LIMPIEZA DEL SET FAKE ---
		if (setCaidaFake != null) setCaidaFake.SetActive(false);
		if (camaraCaidaLateral != null) camaraCaidaLateral.enabled = false;

		// Parar música actual
		if (audioMusica != null)
			audioMusica.Stop();

		// Volver a encender la cámara cinemática para el final
		upperCamCinematic.enabled = true;

		if (canvasInferiorAscenso != null) canvasInferiorAscenso.SetActive(false);
		if (canvasInferiorBorde != null) canvasInferiorBorde.SetActive(false);

		// Mostrar Imágenes en ambas pantallas
		if (imagenPantallaSuperior != null) imagenPantallaSuperior.SetActive(true);
		if (imagenPantallaInferior != null) imagenPantallaInferior.SetActive(true);

		// Esperar 1.5 segundos
		yield return new WaitForSeconds(2.5f);

		// Ocultar Imágenes
		if (imagenPantallaSuperior != null) imagenPantallaSuperior.SetActive(false);
		if (imagenPantallaInferior != null) imagenPantallaInferior.SetActive(false);

		if (canvasInferiorAscenso != null) canvasInferiorAscenso.SetActive(true);

		FinalizarJuego();
	}

	private void FinalizarJuego()
	{

		// Teletransportar al suelo
		playerOrbitScript.transform.position = puntoSueloFinal.position;

		// Hacemos que mire hacia fuera
		playerOrbitScript.transform.LookAt(playerOrbitScript.transform.position + (playerOrbitScript.transform.position - torreEntera.transform.position));

		// POSICIONAR CÁMARA enfrente del personaje, mirándole a la cara
		Vector3 posicionCamara = playerOrbitScript.transform.position + (playerOrbitScript.transform.forward * 4.0f) + (Vector3.up * 1.5f);

		upperCamCinematic.transform.position = posicionCamara;

		// Mirar al personaje
		upperCamCinematic.transform.LookAt(playerOrbitScript.transform.position + Vector3.up * 1.0f);

		// Hundir Torre
		StartCoroutine(HundirTorre());
	}


	private IEnumerator HundirTorre()
	{
		if (torreEntera == null) yield break;

		float velocidadHundimiento = 5.0f;
		float alturaObjetivo = -45f;

		while (torreEntera.transform.position.y > alturaObjetivo)
		{
			torreEntera.transform.Translate(Vector3.down * velocidadHundimiento * Time.deltaTime, Space.World);

			// Temblor
			upperCamCinematic.transform.position += Random.insideUnitSphere * 0.05f;

			yield return null;
		}

		// Asegurar posición final limpia
		Vector3 posFinal = torreEntera.transform.position;
		posFinal.y = alturaObjetivo;
		torreEntera.transform.position = posFinal;

		StartCoroutine(MostrarUIFinal());
		StartCoroutine(FadeInBotonFinal());

	}

	IEnumerator MostrarUIFinal()
	{
		float duracion = 1.0f;
		float t = 0f;

		// Activar canvas
		if (canvasSuperiorFinal != null) canvasSuperiorFinal.SetActive(true);

		// Asegurar alpha inicial 0
		if (canvasSuperiorGroup != null) canvasSuperiorGroup.alpha = 0f;

		while (t < 1f)
		{
			t += Time.deltaTime / duracion;
			float a = Mathf.Lerp(0f, 1f, t);

			if (canvasSuperiorGroup != null) canvasSuperiorGroup.alpha = a;

			yield return null;
		}

		// Música de victoria
		if (audioMusica != null && musicaVictoria != null)
		{
			audioMusica.clip = musicaVictoria;
			audioMusica.loop = false;
			audioMusica.Play();
		}

		if (canvasSuperiorGroup != null) canvasSuperiorGroup.alpha = 1f;

	}

	IEnumerator FadeInBotonFinal()
	{
		if (botonVolverTitle == null)
			yield break;

		// Activar el objeto por si estaba desactivado
		GameObject go = botonVolverTitle.gameObject;
		go.SetActive(true);

		// Empezar con alpha 0
		Color c = botonVolverTitle.color;
		c.a = 0f;
		botonVolverTitle.color = c;

		float t = 0f;

		while (t < 1f)
		{
			t += Time.deltaTime / duracionFadeBoton;
			float a = Mathf.Lerp(0f, 1f, t);

			c.a = a;
			botonVolverTitle.color = c;

			yield return null;
		}

		// Asegurar alpha 1
		c.a = 1f;
		botonVolverTitle.color = c;
	}

	public void VolverAlTitulo()
	{
		SceneManager.LoadScene("titlescreen");
	}

	public void CambiarMusicaPiso2()
	{
		if (audioMusica != null && musicaPiso2 != null)
		{
			audioMusica.clip = musicaPiso2;
			audioMusica.Play();
		}
	}


}