using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class trianguloanim : MonoBehaviour {

	public float velocidad = 4f;
	private Image img;

	void Awake()
	{
		img = GetComponent<Image>();
	}

	void Update()
	{
		if (img == null) return;

		// PingPong de alpha entre 0.3 y 1
		float t = Mathf.PingPong(Time.time * velocidad, 1f);
		float a = Mathf.Lerp(0.3f, 1f, t);

		Color c = img.color;
		c.a = a;
		img.color = c;
	}
}
