using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class caidaanim : MonoBehaviour {
	
	public float velocidad = 15f;
	public float alturaReinicio = 20f; // Altura a la que el fondo sale de pantalla (arriba)
	public float alturaReset = -20f;   // Altura donde reaparece (abajo)

	void Update()
	{
		// Mover hacia arriba (simulando que caemos hacia abajo)
		transform.Translate(Vector3.up * velocidad * Time.deltaTime);

		// Si supera la altura límite, teletransportar abajo
		if (transform.position.y >= alturaReinicio)
		{
			Vector3 pos = transform.position;
			// Ajuste preciso: en lugar de resetear a mano, restamos el tamaño total
			// para evitar saltos visuales. (alturaReinicio - alturaReset = tamaño total)
			pos.y = alturaReset + (pos.y - alturaReinicio); 
			transform.position = pos;
		}
	}
}
