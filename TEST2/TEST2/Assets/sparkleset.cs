using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class sparkleset : MonoBehaviour {
	// Lista de GameObjects que contienen los grupos de sparkles
	public GameObject[] sparkleSets;   // Usamos array en lugar de List<> (más estable en Unity 5.x)
	private int currentSetIndex = 0;

	void Start()
	{
		// Desactivar todos excepto el primero
		for (int i = 0; i < sparkleSets.Length; i++)
		{
			if (sparkleSets[i] != null)
				sparkleSets[i].SetActive(i == 0);
		}
	}

	void Update()
	{
		if (sparkleSets == null || sparkleSets.Length == 0)
			return;

		if (currentSetIndex >= sparkleSets.Length)
			return;

		GameObject currentSet = sparkleSets[currentSetIndex];
		if (currentSet == null)
			return;

		bool allDestroyed = true;

		// Revisar si todos los sparkles del set actual fueron destruidos
		foreach (Transform child in currentSet.transform)
		{
			if (child != null && child.gameObject.activeInHierarchy)
			{
				allDestroyed = false;
				break;
			}
		}

		if (allDestroyed)
		{
			// Desactivar el set actual
			currentSet.SetActive(false);

			// Pasar al siguiente set (si existe)
			currentSetIndex++;
			if (currentSetIndex < sparkleSets.Length && sparkleSets[currentSetIndex] != null)
			{
				sparkleSets[currentSetIndex].SetActive(true);
			}
		}
	}
}