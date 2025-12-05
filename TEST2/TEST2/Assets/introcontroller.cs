using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.N3DS;


public class introcontroller : MonoBehaviour {
	[Header("UI Superior")]
	public Text textoDialogo;
	public Image imagenTransmision; // Para cambiar imágenes de fondo según el texto

	[Header("UI Inferior - Formulario")]
	public RectTransform formularioTransform; // El formulario
	public RectTransform rellenoTransform;    // La imagen del relleno
	public float velocidadRelleno = 200f;     // Velocidad a la que sube el relleno

	[Header("Configuración")]
	[TextArea(3, 10)]
	public string[] frasesParte1; // Frases ANTES del formulario
	[TextArea(3, 10)]
	public string[] frasesParte2; // Frases DESPUÉS del formulario

	[Header("Imágenes Narrativa")]
	public Image displayTransmision; // El componente Image de la pantalla superior
	public Sprite[] galeriaSprites;  // Arrastra aquí todas tus imágenes en orden

	[Header("Typewriter")]
	public float velocidadCaracter = 40f; // caracteres por segundo
	public GameObject iconoContinuar;

	[Header("Audio Diálogo y Formulario")]
	public AudioSource audioSourceIntro;
	public AudioClip sfxLetra;
	public AudioClip sfxCambioLinea;
	public AudioClip sfxMostrarFormulario;
	public AudioClip sfxRellenoSubiendo;
	public AudioClip sfxRellenoBajando;
	public AudioClip sfxFormularioOK;

	[Header("Audio Música Intro")]
	public AudioSource musicaIntro;

	private enum EstadoSonidoRelleno { Ninguno, Subiendo, Bajando }
	private EstadoSonidoRelleno estadoSonido = EstadoSonidoRelleno.Ninguno;

	private bool escribiendo = false;     // True mientras se está escribiendo una frase
	private string fraseActualCompleta;   // Texto completo de la frase actual

	private int indiceFrase = 0;
	private bool esperandoFormulario = false;
	private bool formularioCompletado = false;
	private bool enParte2 = false;

	// Estado interno del formulario
	private float alturaRellenoActual = -220f; // Empezamos abajo (fuera)

	void Start()
	{
		// Inicialización
		if (formularioTransform != null) 
			formularioTransform.anchoredPosition = new Vector2(0, -220); // Escondido abajo

		if (rellenoTransform != null) 
			rellenoTransform.anchoredPosition = new Vector2(0, -220); // Escondido abajo

		// Mostrar primera frase
		ActualizarTexto(frasesParte1[0]);
	}

	void Update()
	{
		// --- FASE DE FORMULARIO ---
		if (esperandoFormulario && !formularioCompletado)
		{
			ProcesarFormulario();
			return; // No dejamos avanzar texto
		}

		// --- FASE DE DIÁLOGO NORMAL ---
		// No dejamos avanzar mientras se está escribiendo
		bool avanzar = !escribiendo && (Input.GetKeyDown(KeyCode.A));

		if (avanzar)
		{
			AvanzarDialogo();
		}
	}

	void AvanzarDialogo()
	{

		if (escribiendo) return;

		// SFX de cambio de línea
		if (audioSourceIntro != null && sfxCambioLinea != null)
			audioSourceIntro.PlayOneShot(sfxCambioLinea);

		string[] frasesActuales = enParte2 ? frasesParte2 : frasesParte1;

		// Si aún quedan frases en el bloque actual
		if (indiceFrase < frasesActuales.Length - 1)
		{
			indiceFrase++;
			ActualizarTexto(frasesActuales[indiceFrase]);
		}
		else
		{
			// Se acabó el bloque actual
			if (!enParte2)
			{
				// Fin de Parte 1 -> Sacar Formulario
				StartCoroutine(MostrarFormulario());
			}
			else
			{
				// Fin de Parte 2 -> Ir al Gameplay
				scenetransition.instancia.CambiarEscena("test2");
			}
		}
	}

	// Esta función auxiliar asigna qué imagen va con qué frase
	// Devuelve -1 si no hay cambio de imagen para esa frase
	int ObtenerIndiceSpriteParaFrase(bool esParte2, int indice)
	{
		// --- CONFIGURACIÓN MANUAL DE LA NARRATIVA ---

		if (!esParte2) // PARTE 1 (Antes del formulario)
		{
			if (indice == 1) return 1;
			if (indice == 3) return 2;
			if (indice == 4) return 3;
			if (indice == 5) return 4;
		}
		else // PARTE 2 (Después del formulario)
		{
			if (indice == 0) return 5;
			if (indice == 1) return 6;
			if (indice == 3) return 7;

		}

		return -1; // -1 significa "No cambies la imagen, deja la que está"
	}

	void ActualizarTexto(string texto)
	{
		
		fraseActualCompleta = texto;
		if (textoDialogo != null)
			textoDialogo.text = "";

		// Al empezar una nueva frase:
		escribiendo = true;

		// Ocultar el icono de continuar mientras se escribe
		if (iconoContinuar != null)
			iconoContinuar.SetActive(false);

		// Lanzar corrutina de escritura
		StartCoroutine(TypewriterCoroutine());

		// --- LÓGICA DE CAMBIO DE IMAGEN ---
		int idSprite = ObtenerIndiceSpriteParaFrase(enParte2, indiceFrase);

		if (idSprite >= 0 && idSprite < galeriaSprites.Length)
		{
			if (galeriaSprites[idSprite] != null)
			{
				displayTransmision.sprite = galeriaSprites[idSprite];
			}
		}
	}

	IEnumerator TypewriterCoroutine()
	{
		if (textoDialogo == null) yield break;

		textoDialogo.text = "";
		int longitud = fraseActualCompleta.Length;
		float t = 0f;
		int indice = 0;
		int letrasDesdeUltimoSonido = 0;

		while (indice < longitud)
		{
			t += Time.deltaTime * velocidadCaracter;
			int nuevoIndice = Mathf.FloorToInt(t);

			if (nuevoIndice != indice)
			{
				int anterior = indice;
				indice = Mathf.Clamp(nuevoIndice, 0, longitud);
				textoDialogo.text = fraseActualCompleta.Substring(0, indice);

				letrasDesdeUltimoSonido += (indice - anterior);

				// SFX por letra
				if (letrasDesdeUltimoSonido >= 4)
				{
					if (audioSourceIntro != null && sfxLetra != null) {
						audiomanager.Instance.PlaySFX(sfxLetra);
						letrasDesdeUltimoSonido = 0;
					}
				}
			}

			yield return null;
		}

		textoDialogo.text = fraseActualCompleta;
		escribiendo = false;

		if (!esperandoFormulario && iconoContinuar != null)
			iconoContinuar.SetActive(true);
	}


	// --- LÓGICA DEL FORMULARIO ---

	IEnumerator MostrarFormulario()
	{
		esperandoFormulario = true; // Bloqueamos avance de texto

		if (audioSourceIntro != null && sfxMostrarFormulario != null)
			audioSourceIntro.PlayOneShot(sfxMostrarFormulario);

		if (iconoContinuar != null)
			iconoContinuar.SetActive(false);

		// Animación simple: Subir formulario de -220 a 0
		float tiempo = 0.5f;
		float t = 0;
		Vector2 posInicial = new Vector2(0, -220);
		Vector2 posFinal = new Vector2(0, 0);

		while (t < 1f)
		{
			t += Time.deltaTime / tiempo;
			formularioTransform.anchoredPosition = Vector2.Lerp(posInicial, posFinal, t);
			yield return null;
		}
	}

	void ProcesarFormulario()
	{
		if (formularioCompletado) 
			return;
		
		bool pulsando = Input.GetMouseButton(0);

		// JUGADOR PULSANDO
		if (pulsando)
		{
			// Subir la imagen del relleno
			alturaRellenoActual += velocidadRelleno * Time.deltaTime;

			if (alturaRellenoActual > 0) alturaRellenoActual = 0;

			// Chequear si terminó
			if (alturaRellenoActual >= 0)
			{
				CompletarFormulario();
			}

			if (alturaRellenoActual < 0) 
			{
				if (estadoSonido != EstadoSonidoRelleno.Subiendo)
				{
					CambiarSonidoRelleno(EstadoSonidoRelleno.Subiendo);
				}
			}
				
		}
		// JUGADOR NO PULSA
		else
		{
			// Solo bajamos si está por encima del mínimo (-220)
			if (alturaRellenoActual > -220f)
			{
				if (estadoSonido != EstadoSonidoRelleno.Bajando)
				{
					CambiarSonidoRelleno(EstadoSonidoRelleno.Bajando);
				}

				// Bajamos un poco más rápido que la subida
				alturaRellenoActual -= velocidadRelleno * 1.5f * Time.deltaTime;

				if (alturaRellenoActual < -220f) alturaRellenoActual = -220f;
			}
				
		}

		// Aplicar la posición visualmente (siempre)
		rellenoTransform.anchoredPosition = new Vector2(0, alturaRellenoActual);
	}

	void CambiarSonidoRelleno(EstadoSonidoRelleno nuevoEstado)
	{
		if (audioSourceIntro == null) return;

		// Parar lo que hubiera
		audioSourceIntro.Stop();

		switch (nuevoEstado)
		{
		case EstadoSonidoRelleno.Subiendo:
			if (sfxRellenoSubiendo != null)
			{
				audioSourceIntro.clip = sfxRellenoSubiendo;
				audioSourceIntro.loop = true;
				audioSourceIntro.Play();
			}
			break;

		case EstadoSonidoRelleno.Bajando:
			if (sfxRellenoBajando != null)
			{
				audioSourceIntro.clip = sfxRellenoBajando;
				audioSourceIntro.loop = true;
				audioSourceIntro.Play();
			}
			break;

		default:
			audioSourceIntro.clip = null;
			break;
		}

		estadoSonido = nuevoEstado;
	}


	void CompletarFormulario()
	{
		formularioCompletado = true;
		esperandoFormulario = false; // Desbloqueamos texto

		CambiarSonidoRelleno(EstadoSonidoRelleno.Ninguno);

		// Sonido de éxito
		if (audioSourceIntro != null && sfxFormularioOK != null)
			audioSourceIntro.PlayOneShot(sfxFormularioOK);
		
		enParte2 = true;             // Cambiamos al set de frases 2
		indiceFrase = 0;             // Reiniciamos índice para el nuevo set

		// Mostrar primera frase de la parte 2 automáticamente
		ActualizarTexto(frasesParte2[0]);

		StartCoroutine(OcultarFormulario());

	}

	IEnumerator OcultarFormulario()
	{
		// Bajamos formulario y relleno de su posición actual hasta y = -220
		float duracion = 0.5f;
		float t = 0f;

		Vector2 inicioForm = formularioTransform.anchoredPosition;
		Vector2 fin    = new Vector2(0f, -220f);

		while (t < 1f)
		{
			t += Time.deltaTime / duracion;
			float s = Mathf.SmoothStep(0f, 1f, t);

			Vector2 pos = Vector2.Lerp(inicioForm, fin, s);

			formularioTransform.anchoredPosition = pos;
			rellenoTransform.anchoredPosition    = pos;

			yield return null;
		}

	}

}
