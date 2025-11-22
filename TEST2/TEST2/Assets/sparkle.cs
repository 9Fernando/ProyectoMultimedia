using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class sparkle : MonoBehaviour {
	public GameObject apoyoViga;  // El objeto de la viga asociada

	public void DestroySparkle() {

		// Desactivar el apoyo si existe
		if (apoyoViga != null)
			apoyoViga.SetActive(false);

		// Destruir este brillo
		Destroy(gameObject);
	}
}