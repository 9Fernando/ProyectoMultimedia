using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class floorscript : MonoBehaviour
{
	[Header("Apoyos que pertenecen a este piso")]
	public GameObject[] apoyos;

	[Header("Base que se destruye cuando se eliminan todos los apoyos")]
	public GameObject baseDelPiso;

	[Header("Jugador con orbitauto")]
	public orbitauto playerOrbitScript;

	[Header("Opcional: Solo para el ÚLTIMO piso")]
	public finalcinematic cinematicController;

	[Header("Nuevos límites de altura al destruir esta base")]
	public float newMinHeight = 0f;
	public float newMaxHeight = 5f;

	[Header("Configuración Especial")]
	public bool esPiso2 = false;

	public AudioSource audioFx;
	public AudioClip sfxApoyoPlataforma;

	public finalcinematic cinematicRefParaMusica; 

	private bool baseDestruida = false;

	private void Update()
	{
		if (baseDestruida) return;

		bool todosDestruidos = true;

		foreach (GameObject apoyo in apoyos)
		{
			if (apoyo != null && apoyo.activeSelf)
			{
				todosDestruidos = false;
				break;
			}
		}

		if (todosDestruidos)
		{
			baseDelPiso.SetActive(false);
			baseDestruida = true;

			if (audioFx != null && sfxApoyoPlataforma != null)
				audioFx.PlayOneShot(sfxApoyoPlataforma);

			// CAMBIO DE MÚSICA
			if (esPiso2)
			{

				if (cinematicRefParaMusica != null)
				{
					cinematicRefParaMusica.CambiarMusicaPiso2();
				}

			}

			if (playerOrbitScript != null)
			{
				playerOrbitScript.SetHeightLimits(newMinHeight, newMaxHeight);
			}

			// Si este piso tiene cinemática, la ejecuta
			if (cinematicController != null)
			{
				cinematicController.StartCinematic();
			}
		}
	}
}