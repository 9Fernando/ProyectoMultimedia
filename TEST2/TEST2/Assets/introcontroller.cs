using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.N3DS;


public class introcontroller : MonoBehaviour {

	public Text textoDialogo;
	public string[] frases; 

	private int indiceFrase = 0;

	void Start()
	{
		// Mostrar primera frase al empezar
		if (frases.Length > 0)
			textoDialogo.text = frases[0];
	}

	void Update()
	{
		// Detectar botón A o Click para avanzar
		bool avanzar = Input.GetKeyDown(KeyCode.A);

		if (avanzar)
		{
			SiguienteFrase();
		}
	}

	void SiguienteFrase()
	{
		indiceFrase++;

		if (indiceFrase < frases.Length)
		{
			// Mostrar siguiente frase
			textoDialogo.text = frases[indiceFrase];
		}
		else
		{
			EmpezarGameplay();
		}
	}

	void EmpezarGameplay()
	{
		SceneManager.LoadScene("test2");
	}
}
