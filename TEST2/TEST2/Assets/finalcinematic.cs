using System.Collections;
using UnityEngine;
using UnityEngine.N3DS;

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
	public GameObject imagenPantallaSuperior; // Arrastra CanvasTop
	public GameObject imagenPantallaInferior; // Arrastra CanvasBot

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
	}

	public void StartCinematic()
	{
		// Desactivar controles
		playerOrbitScript.enabled = false;
		cameraFollowScript.enabled = false;

		// Cambiar cámaras
		upperCamGameplay.enabled = false;
		upperCamCinematic.enabled = true;
		upperCamCinematic.GetComponent<Camera>().enabled = true; // Asegurar componente

		// Colocar cámara
		if (puntoFijoCamaraAscenso != null)
		{
			upperCamCinematic.transform.position = puntoFijoCamaraAscenso.position;
			upperCamCinematic.transform.LookAt(playerOrbitScript.transform);
		}

		StartCoroutine(SecuenciaAscenso());
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

		// Tecla X: Saltar directamente al Ascenso (como si rompieras el último piso)
		if (Input.GetKeyDown(KeyCode.X))
		{
			print("DEBUG: Saltando a Cinemática de Ascenso");
			StartCinematic();
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
		print("Pausa QTE. Esperando L+R");
	}

	// Llamado al pulsar L+R
	public void ContinuarAnimacion()
	{
		playerAnimator.SetFloat("VelocidadEspada", 1f);
		esperandoInput = false;
		etapaQTE++;
	}
		
	// Se ejecutará cuando termine toda la animación de la espada tras el último input
	public void EventoFinAnimacion()
	{
		print("Animación Espada Terminada. Iniciando Caída.");
		IniciarCaidaHaciaTorre();
	}

	// --- FASE DE CAÍDA ---

	public void IniciarCaidaHaciaTorre()
	{
		playerAnimator.enabled = false; 
		StartCoroutine(SecuenciaCaida());
	}

	private IEnumerator SecuenciaCaida()
	{
		float velocidadCaida = 15f;
		Transform playerT = playerOrbitScript.transform;

		// Caer hasta el punto medio
		while (Vector3.Distance(playerT.position, puntoMitadTorre.position) > 0.5f)
		{
			playerT.position = Vector3.MoveTowards(playerT.position, puntoMitadTorre.position, velocidadCaida * Time.deltaTime);

			// Opcional: Rotar hacia abajo para "clavar" la espada
			playerT.LookAt(puntoSueloFinal.position); 

			// Cámara sigue mirando
			upperCamCinematic.transform.LookAt(playerT.position);

			yield return null;
		}

		// Llegó al medio -> Esperar Tapa
		esperandoCierreTapa = true;
		print("¡CIERRA LA TAPA AHORA!");

	}

	// Detecta suspensión (Sleep Mode)
	void OnApplicationPause(bool pauseStatus)
	{
		if (esperandoCierreTapa)
		{
			if (pauseStatus == true) // Cerrando
			{
				haCerradoTapa = true;
				if (audioSource != null) {
					audioSource.PlayOneShot(sonidoFinal);
					// Intento de forzar que suene antes del corte
				}
			}
			else if (pauseStatus == false) // Se ha reanudado (Tapa abierta)
			{
				if (haCerradoTapa)
				{
					esperandoCierreTapa = false;
					StartCoroutine(SecuenciaImagenYFinal());
				}
			}
		}
	}

	private IEnumerator SecuenciaImagenYFinal()
	{
		// Mostrar Imágenes en ambas pantallas
		if (imagenPantallaSuperior != null) imagenPantallaSuperior.SetActive(true);
		if (imagenPantallaInferior != null) imagenPantallaInferior.SetActive(true);

		// Esperar 1.5 segundos
		yield return new WaitForSeconds(2.5f);

		// Ocultar Imágenes
		if (imagenPantallaSuperior != null) imagenPantallaSuperior.SetActive(false);
		if (imagenPantallaInferior != null) imagenPantallaInferior.SetActive(false);

		// AHORA SÍ, ejecutar el final (teletransporte y hundimiento)
		FinalizarJuego();
	}

	private void FinalizarJuego()
	{
		// Teletransportar al suelo
		playerOrbitScript.transform.position = puntoSueloFinal.position;

		// Hacemos que mire hacia fuera.
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
		float alturaObjetivo = -60f;

		print("Torre hundiéndose...");

		// Mientras la torre siga por encima del objetivo...
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

		print("FIN DEL JUEGO");
	}

}