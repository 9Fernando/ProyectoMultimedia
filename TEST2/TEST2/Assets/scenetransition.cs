using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class scenetransition : MonoBehaviour {

	public static scenetransition instancia;

	[Header("CanvasGroups de transición")]
	public CanvasGroup canvasUpper; // superior
	public CanvasGroup canvasLower; // inferior

	public float duracionFade = 0.5f;

	void Awake()
	{
		if (instancia == null)
		{
			instancia = this;
			DontDestroyOnLoad(gameObject);
		}
		else
		{
			Destroy(gameObject);
			return;
		}

		if (canvasUpper == null && canvasLower == null)
		{
			Debug.LogWarning("SceneTransition sin CanvasGroup asignados");
			return; // no hacer fade si no tenemos nada
		}

		// Empezamos en negro y hacemos fade in
		SetAlpha(1f);
		StartCoroutine(FadeIn());
	}

	void SetAlpha(float a)
	{
		if (canvasUpper != null) canvasUpper.alpha = a;
		if (canvasLower != null) canvasLower.alpha = a;
	}

	IEnumerator FadeIn()
	{
		float t = 0f;
		while (t < duracionFade)
		{
			t += Time.deltaTime;
			float a = 1f - (t / duracionFade);
			SetAlpha(a);
			yield return null;
		}
		SetAlpha(0f);
	}

	public void CambiarEscena(string nombreEscena)
	{
		StartCoroutine(FadeOutAndLoad(nombreEscena));
	}

	IEnumerator FadeOutAndLoad(string nombreEscena)
	{
		float t = 0f;

		// FADE OUT
		while (t < duracionFade)
		{
			t += Time.deltaTime;
			float a = t / duracionFade;
			SetAlpha(a);
			yield return null;
		}
		SetAlpha(1f);

		// Cargar escena
		SceneManager.LoadScene(nombreEscena);
		yield return null;

		// FADE IN en nueva escena
		t = 0f;
		while (t < duracionFade)
		{
			t += Time.deltaTime;
			float a = 1f - (t / duracionFade);
			SetAlpha(a);
			yield return null;
		}
		SetAlpha(0f);
	}
}
