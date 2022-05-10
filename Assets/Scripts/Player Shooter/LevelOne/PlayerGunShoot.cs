using UnityEngine;
using System.Collections;

public class PlayerGunShoot : MonoBehaviour {

	//To set the number of gun damage
	public int gunDamage = 1;											
	
	// To set the number in seconds, controlling the fire rate of the player's gun
	public float fireRate = 0.25f;											
	
	// To set the distance in Unity units which the player can fire
	public float weaponRange = 50f;										
	
	// To set the amount of force to objects with a rigidBody
	public float hitForce = 100f;										

	// To set the transform reference to playerGunEnd (muzzle location)
	public Transform playerGunEnd;											

	// Holds a reference to the first person camera
	private Camera FPSCamera;												
	
	// WaitForSeconds object used by our ShotEffect coroutine, determines time laser line will remain visible
	private WaitForSeconds shotDuration = new WaitForSeconds(0.07f);	
	
	// Reference to the audio source which will play the shooting sound effect
	private AudioSource gunAudio;										
	
	// Reference to the LineRenderer component which will display our laserline
	private LineRenderer laserLine;										
	
	// Float to store the time the player will be allowed to fire again, after firing
	private float nextFire;

	///// Track Ammo Count:
	// current ammo count
	private int currentAmmo;
	// max possible ammo count
	private int maxAmmo = 15;
	// min possible ammo count
	private int minAmmo = 0;

	// Access GameManagerScript
	public GameManagerScript gameManagerScript;

	void Start () 
	{
		// Get and store a reference to the LineRenderer component
		laserLine = GetComponent<LineRenderer>();

		// Get and store a reference to the AudioSource component
		gunAudio = GetComponent<AudioSource>();
		
		// To display message if there's no audio 	
		 if (gunAudio == null)
         {
             Debug.LogError("No gun shot audio found!");
         }

		// Get and store a reference to the Camera by searching this GameObject and its parents
		FPSCamera = GetComponentInParent<Camera>();

		// assign ammo count to max value
		currentAmmo = maxAmmo;
		gameManagerScript.updateAmmo(currentAmmo);
	}
	

	void Update () 
	{
		// Check if the player has pressed the fire button and if enough time has elapsed since they last fired
		if (Input.GetButtonDown("Fire1") && Time.time > nextFire) 
		{
			///// condition to fire if ammo count greater than zero
			if (currentAmmo > minAmmo)
			{
				// Update the time when our player can fire next
				nextFire = Time.time + fireRate;

				// Start our ShotEffect coroutine to turn our laser line on and off
				StartCoroutine(ShotEffect());

				// Create a vector at the center of our camera's viewport
				Vector3 rayOrigin = FPSCamera.ViewportToWorldPoint(new Vector3(0.5f, 0.5f, 0.0f));

				//  To declare a raycast hit to store information about what the raycast has hit
				RaycastHit hit;

				// Set the start position for our visual effect for our laser to the position of playerGunEnd
				laserLine.SetPosition(0, playerGunEnd.position);

				// Check if our raycast has hit anything
				if (Physics.Raycast(rayOrigin, FPSCamera.transform.forward, out hit, weaponRange))
				{
					// Set the end position for our laser line 
					laserLine.SetPosition(1, hit.point);

					// Get a reference to a health script attached to the collider we hit
					ShootableTargets health = hit.collider.GetComponent<ShootableTargets>();

					// If there was a health script attached
					if (health != null)
					{
						// Call the damage function of that script, passing in our gunDamage variable
						health.Damage(gunDamage);
					}

					// Check if the object we hit has a rigidbody attached
					if (hit.rigidbody != null)
					{
						// Add force to the rigidbody we hit, in the direction from which it was hit
						hit.rigidbody.AddForce(-hit.normal * hitForce);
					}
				}
				else
				{
					// If we did not hit anything, set the end of the line to a position directly in front of the camera at the distance of weaponRange
					laserLine.SetPosition(1, rayOrigin + (FPSCamera.transform.forward * weaponRange));
				}
			}
			//else
           // {
				// when ammo count reaches zero
				//Debug.Log("Player out of Ammo");
			//}
			///// reduce ammo count by 1
			currentAmmo--;
			
			// clamp ammo count between min and max
            // so that ammo count would not go into negative range
			int ammoClamp = Mathf.Clamp(currentAmmo, minAmmo, maxAmmo);
			
			// assign current value to clamped value
			currentAmmo = ammoClamp;
			
			// update current ammo value
			gameManagerScript.updateAmmo(currentAmmo);
		}
	}

	private IEnumerator ShotEffect()
	{
		// Play the shooting sound effect
		gunAudio.Play();

		// Turn on our line renderer
		laserLine.enabled = true;

		//Wait for .07 seconds
		yield return shotDuration;

		// Deactivate our line renderer after waiting
		laserLine.enabled = false;
	}
}