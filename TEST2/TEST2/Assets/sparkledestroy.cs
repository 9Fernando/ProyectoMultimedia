using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class sparkledestroy : MonoBehaviour {
	public Camera lowerCam;          // Cámara inferior (LowerLCD)
	public Transform firePoint;      // Punto de salida del misil (en el player)
	public GameObject missilePrefab; // Prefab del misil visual
	public float missileSpeed = 25f; // Velocidad del misil
	public float maxMissileDistance = 100f; // Distancia máxima si no impacta nada
	public float missileLifetime = 1.5f; // Vida máxima del misil

	void Update()
	{
		if (Input.GetMouseButtonDown(0))
		{
			Ray ray = lowerCam.ScreenPointToRay(Input.mousePosition);
			RaycastHit hit;

			Vector3 destino;
			sparkle objetivo = null;

			if (Physics.Raycast(ray, out hit))
			{
				// Punto real de impacto
				destino = hit.point;
				objetivo = hit.collider.GetComponent<sparkle>();
			}
			else
			{
				// No ha chocado con nada: disparamos hacia delante una distancia fija
				destino = ray.origin + ray.direction * maxMissileDistance;
			}

			// Siempre lanzamos misil
			StartCoroutine(DispararMisil(objetivo, destino));
		}
	}

	IEnumerator DispararMisil(sparkle objetivo, Vector3 destino)
	{
		if (missilePrefab == null || firePoint == null)
			yield break;

		GameObject misil = Instantiate(missilePrefab, firePoint.position, Quaternion.identity);

		float tiempo = 0f;

		while (misil != null && tiempo < missileLifetime)
		{
			// Mover hacia el destino
			Vector3 dir = (destino - misil.transform.position).normalized;
			misil.transform.position += dir * missileSpeed * Time.deltaTime;
			misil.transform.rotation = Quaternion.LookRotation(dir);

			tiempo += Time.deltaTime;

			// Si llegó muy cerca del destino, rompemos antes
			if (Vector3.Distance(misil.transform.position, destino) <= 0.1f)
				break;

			yield return null;
		}

		// Si había sparkle, lo destruimos al final del recorrido
		if (objetivo != null)
			objetivo.DestroySparkle();

		if (misil != null)
			Destroy(misil);
	}
}