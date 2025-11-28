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
		// Detectar botón A avanzar (solo si NO estamos esperando formulario)
		bool avanzar = Input.GetKeyDown(KeyCode.A);

		if (avanzar)
		{
			AvanzarDialogo();
		}
	}

	void AvanzarDialogo()
	{
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
				SceneManager.LoadScene("test2");
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
			// Ejemplo:
			if (indice == 1) return 1; // Frase 0 ("Buenos dias...") -> Sprite 0 (Ruido estático / Logo)
			if (indice == 3) return 2; // Frase 1 ("Invasión...") -> Sprite 1 (Mapa invasión)
			if (indice == 4) return 3; // Frase 4 ("D.R.O.N...") -> Sprite 2 (Logo DRON)
			if (indice == 5) return 4; // Frase 4 ("D.R.O.N...") -> Sprite 2 (Logo DRON)
			// Las frases 2 y 3 no cambian imagen, mantienen la anterior
		}
		else // PARTE 2 (Después del formulario)
		{
			if (indice == 0) return 3; // Frase 0 ("Gracias...") -> Sprite 3 (Tick verde / Presentador feliz)
			if (indice == 1) return 4; // Frase 1 ("Joystick...") -> Sprite 4 (Dibujo Joystick)
		}

		return -1; // -1 significa "No cambies la imagen, deja la que está"
	}

	void ActualizarTexto(string texto)
	{
		if(textoDialogo != null) textoDialogo.text = texto;

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

	// --- LÓGICA DEL FORMULARIO ---

	IEnumerator MostrarFormulario()
	{
		esperandoFormulario = true; // Bloqueamos avance de texto

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
		}
		// JUGADOR NO PULSA
		else
		{
			// Solo bajamos si está por encima del mínimo (-220)
			if (alturaRellenoActual > -220f)
			{
				// Bajamos un poco más rápido que la subida
				alturaRellenoActual -= velocidadRelleno * 1.5f * Time.deltaTime;

				if (alturaRellenoActual < -220f) alturaRellenoActual = -220f;
			}
		}

		// Aplicar la posición visualmente (siempre)
		rellenoTransform.anchoredPosition = new Vector2(0, alturaRellenoActual);
	}

	void CompletarFormulario()
	{
		formularioCompletado = true;
		esperandoFormulario = false; // Desbloqueamos texto
		enParte2 = true;             // Cambiamos al set de frases 2
		indiceFrase = 0;             // Reiniciamos índice para el nuevo set

		// Mostrar primera frase de la parte 2 automáticamente
		ActualizarTexto(frasesParte2[0]);

	}
}
