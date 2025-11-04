using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class followbehind : MonoBehaviour {
	public Transform player;   // Jugador
	public Transform villain;  // Villano
	public float distanceBack = 6f; // distancia detrás del jugador
	public float heightOffset = 2f; // altura relativa al jugador
	public float smoothSpeed = 5f;  // suavizado de movimiento

	void LateUpdate()
	{
		if (player == null || villain == null) return;

		// 1) Vector desde villano hacia jugador (solo horizontal)
		Vector3 villainToPlayer = (player.position - villain.position);
		villainToPlayer.y = 0f;
		villainToPlayer.Normalize();

		// 2) Posición deseada detrás del jugador, siguiendo su altura
		Vector3 desiredPos = player.position - villainToPlayer * distanceBack;
		desiredPos.y = player.position.y + heightOffset; // sigue la altura del jugador

		// 3) Suavizado de posición
		transform.position = Vector3.Lerp(transform.position, desiredPos, smoothSpeed * Time.deltaTime);

		// 4) Mirar hacia el villano solo en el plano horizontal (sin inclinar)
		Vector3 directionToVillain = villain.position - transform.position;
		directionToVillain.y = 0f;

		if (directionToVillain.sqrMagnitude > 0.001f)
		{
			Quaternion targetRotation = Quaternion.LookRotation(directionToVillain.normalized, Vector3.up);
			transform.rotation = Quaternion.Lerp(transform.rotation, targetRotation, smoothSpeed * Time.deltaTime);
		}
	}
}