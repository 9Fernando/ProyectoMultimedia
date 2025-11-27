using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.N3DS;

public class titlemenucontroller : MonoBehaviour {

	void Update()
	{
		// Detectar botón Start (Enter en teclado PC, Start en 3DS)
		bool pressStart = Input.GetKeyDown(KeyCode.Return);

		if (pressStart)
		{
			print("Iniciando juego...");
			// Cargamos la siguiente escena por nombre
			SceneManager.LoadScene("intro"); 
		}
	}
}
