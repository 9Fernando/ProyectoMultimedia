using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class audiomanager : MonoBehaviour {

	public static audiomanager Instance;

	[Header("Pool SFX")]
	public GameObject sfxPrefab; // Un objeto vacío con un AudioSource
	public int poolSize = 5;     // Solo permitimos 5 sonidos simultáneos

	private List<AudioSource> sfxPool;
	private int poolIndex = 0;

	void Awake()
	{
		// Singleton simple
		if (Instance == null) Instance = this;
		else { Destroy(gameObject); return; }

		InicializarPool();
	}

	void InicializarPool()
	{
		sfxPool = new List<AudioSource>();
		GameObject poolParent = new GameObject("SFX_Pool");

		for (int i = 0; i < poolSize; i++)
		{
			GameObject go = new GameObject("SFX_Source_" + i);
			go.transform.parent = poolParent.transform;

			AudioSource src = go.AddComponent<AudioSource>();
			src.playOnAwake = false;
			src.spatialBlend = 0f; // 2D sound

			// Configuración crítica para 3DS
			src.priority = 128; 

			sfxPool.Add(src);
		}
	}

	public void PlaySFX(AudioClip clip, float volumen = 0.15f)
	{
		if (clip == null) return;

		// Cogemos el siguiente AudioSource de la lista (Round Robin)
		AudioSource source = sfxPool[poolIndex];

		// Lo forzamos a parar y reproducir el nuevo (roba el canal si estaba ocupado)
		source.Stop();
		source.clip = clip;
		source.volume = volumen;
		source.Play();

		// Avanzamos índice
		poolIndex++;
		if (poolIndex >= poolSize) poolIndex = 0;
	}
}
