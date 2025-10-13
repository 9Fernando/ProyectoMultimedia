using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.N3DS;

public class UINameToText : MonoBehaviour {

	private Text t;
	void Start() {
		t = GetComponent<Text>();
		string User;
		bool isProfane;
		UnityEngine.N3DS.Config.GetUserName(out User, out isProfane);
		t.text = User;
	}
	
}
