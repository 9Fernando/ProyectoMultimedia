using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.N3DS;

public class KeyboardShow : MonoBehaviour {

	// Update is called once per frame
	private Text t;
	void Start()
    {
		t = GetComponent<Text>();
    }
	void Update () {
		if (Input.GetMouseButtonDown(0))
		{
			Keyboard.Show();
		}

		if (UnityEngine.N3DS.Keyboard.GetResult() == (int)N3dsKeyboardResult.Okay)
		{
			string tex = UnityEngine.N3DS.Keyboard.GetText();
			t.text = tex;
		}
	}
}
