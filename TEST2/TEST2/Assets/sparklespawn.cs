using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class sparklespawn : MonoBehaviour {
	public Transform villain;      
	public Transform player;       
	public GameObject sparklePrefab;
	public float spawnInterval = 3f;
	public float spawnRadius = 3f;

	private float timer = 0f;
	private List<GameObject> activeSparkles = new List<GameObject>();
	private int maxSparkles = 4;

	void Update()
	{
		// Limpiar sparkles destruidos
		int beforeClean = activeSparkles.Count;
		activeSparkles.RemoveAll(s => s == null);
		int afterClean = activeSparkles.Count;

		if (beforeClean != afterClean)
			Debug.Log("[DEBUG] Removed " + (beforeClean - afterClean) + " destroyed sparkles. Remaining: " + afterClean);

		timer += Time.deltaTime;
		if (timer >= spawnInterval)
		{
			timer = 0f;
			Debug.Log("[DEBUG] Spawn interval reached. Active sparkles: " + activeSparkles.Count);

			if (activeSparkles.Count < maxSparkles)
			{
				GameObject sparkle = SpawnSparkle();
				if (sparkle != null)
				{
					activeSparkles.Add(sparkle);
					Debug.Log("[DEBUG] Spawned new sparkle: " + sparkle.name + " | Position: " + sparkle.transform.position + " | Scale: " + sparkle.transform.localScale);
				}
				else
				{
					Debug.Log("[DEBUG] SpawnSparkle returned null. No sparkle spawned.");
				}
			}
			else
			{
				Debug.Log("[DEBUG] Max sparkles reached. No spawn this interval.");
			}
		}
	}

	GameObject SpawnSparkle()
	{
		if (villain == null || player == null || sparklePrefab == null)
		{
			Debug.LogWarning("[DEBUG] Missing references: villain, player, or sparklePrefab.");
			return null;
		}

		Collider col = villain.GetComponent<Collider>();
		if (col == null)
		{
			Debug.LogWarning("[DEBUG] Villain has no collider. Cannot spawn sparkle.");
			return null;
		}

		Vector3 randomDir = Random.onUnitSphere;
		Vector3 rayStart = villain.position + randomDir * col.bounds.extents.magnitude * 2f;
		Ray ray = new Ray(rayStart, -randomDir);
		RaycastHit hit;

		Debug.DrawRay(rayStart, -randomDir * (col.bounds.extents.magnitude * 3f), Color.red, 2f);
		Debug.Log("[DEBUG] Raycast start: " + rayStart + ", direction: " + (-randomDir));

		if (!col.Raycast(ray, out hit, Mathf.Infinity))
		{
			Debug.LogWarning("[DEBUG] Raycast did not hit villain surface.");
			return null;
		}

		Vector3 spawnPos = hit.point - randomDir * 0.02f;
		spawnPos.y = player.position.y;

		Debug.Log("[DEBUG] Raycast hit at: " + hit.point + ", normal: " + hit.normal + ", spawn position adjusted: " + spawnPos);

		GameObject sparkle = Instantiate(sparklePrefab, spawnPos, Quaternion.identity);

		Debug.Log("Instantiated sparkle active? " + sparkle.activeInHierarchy);

		sparkle.transform.localScale = sparklePrefab.transform.localScale;
		sparkle.transform.rotation = Quaternion.LookRotation(hit.normal);
		sparkle.transform.SetParent(villain, true);

		Debug.Log("[DEBUG] After parenting: Position: " + sparkle.transform.position + " | LocalScale: " + sparkle.transform.localScale + " | LossyScale: " + sparkle.transform.lossyScale);

		Collider sparkCol = sparkle.GetComponent<Collider>();
		if (sparkCol != null)
			Debug.Log("[DEBUG] Sparkle has collider: " + sparkCol.name);

		Rigidbody rb = sparkle.GetComponent<Rigidbody>();
		if (rb != null)
			Debug.Log("[DEBUG] Sparkle has Rigidbody. Gravity: " + rb.useGravity + ", isKinematic: " + rb.isKinematic);

		return sparkle;
	}
}