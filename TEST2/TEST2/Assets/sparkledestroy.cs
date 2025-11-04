using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class sparkledestroy : MonoBehaviour {
	public Camera lowerCam;  // Cámara inferior (LowerLCD)

	void Update() {
		if (Input.GetMouseButtonDown(0)) {  // Clic izquierdo = toque
			Ray ray = lowerCam.ScreenPointToRay(Input.mousePosition);
			RaycastHit hit;

			if (Physics.Raycast(ray, out hit)) {
				sparkle sparkle = hit.collider.GetComponent<sparkle>();
				if (sparkle != null) {
					sparkle.DestroySparkle();
				}
			}
		}
	}
}