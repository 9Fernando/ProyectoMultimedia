using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class playeranimations : MonoBehaviour {
	public finalcinematic cinematicManager;

	public void PausarAnimacion()
	{
		if (cinematicManager != null)
		{
			cinematicManager.PausarAnimacion();
		}
		else
		{
			print("¡Falta asignar el CinematicManager en el script del Player!");
		}
	}

	public void EventoFinAnimacion()
	{
		print("¡Puente recibió fin de animación!"); 

		if (cinematicManager != null)
		{
			cinematicManager.EventoFinAnimacion();
		}
	}
}