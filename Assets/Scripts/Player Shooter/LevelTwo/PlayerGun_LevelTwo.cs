using UnityEngine;
using System.Collections;

public class PlayerGun_LevelTwo : MonoBehaviour
{
	//To set the number of gun damage.
	/*Note: Each gun may have different values in Unity's Inspector*/
    public float gunDamage = 15f;
	
	//To set the range of the weapon can shoot.
	/*Note: Each gun may have different values in Unity's Inspector*/
	public float weaponRange = 100f;
	
	// To set the number in seconds, controlling the fire rate of the player's gun.
	/*Note: Each gun may have different values in Unity's Inspector*/
	public float fireRate = 0.25f;	
	
	// Float to store the time the player will be allowed to fire again, after firing.
	/*Note: Each gun may have different values in Unity's Inspector*/
	private float nextFire = 0f;
	
	// To set the amount of force to objects with a rigidBody.
	/*Note: Each gun may have different values in Unity's Inspector*/
	public float hitForce = 30f;	
	
	// Holds a reference to the first person camera.
	public Camera FPSCamera;
	
	// Reference the the particle system, MuzzleFlash effect.
	public ParticleSystem MuzzleFlash; 
	
	// Reference the game object, impactEffect.
	public GameObject impactEffect;
	
	// To set the max ammo of the weapon.
	/*Note: Each gun may have different values in Unity's Inspector*/
	public int maxAmmo = 15;
	
	// To set the current amount of ammo to 0.
	private int currentAmmo = 0;
	
	// To set the reload time.
	/*Note: Each gun may have different values in Unity's Inspector*/
	public float reloadTime = 1f;
	
	// To set isReloading to false.
	private bool isReloading = false;
	
	// Reference to the audio source which will play the shooting sound effect.
	private AudioSource gunShotAudio; 
	
	// Reference to gun's animator for reloading the ammo.
	public Animator weaponHolderAnimator;
	
	void Start()
	{
		// Set the current ammo to the same amount as max ammo.
		currentAmmo = maxAmmo;
		
		// Get and store a reference to the AudioSource component.
         gunShotAudio = GetComponent<AudioSource>();
 
		// To display message if there's no audio 	.
         if (gunShotAudio == null)
         {
             Debug.LogError("No gun shot audio found!");
         }
	}
	
	void OnEnable()
	{
		isReloading = false;
		weaponHolderAnimator.SetBool("isReloading", false);
	}
	
    // Update is called once per frame
    void Update()
    {
		if (isReloading)
			return;
		
		// If the current ammo is 0.
		if (currentAmmo == 0)
		{
			StartCoroutine(Reload());
			return;
		}
		
		if (Input.GetButtonDown("Fire1") && Time.time >= nextFire)
		{
			// To update the time when the player can fire next.
			nextFire = Time.time + fireRate;
			Shoot();		
			
			// Play the shooting sound effect.
			gunShotAudio.Play(); 
		}
		
		void Shoot()
		{
			// To play the muzzle flash effect.
			MuzzleFlash.Play();
			
			//  To declare a raycast hit to store information about what the raycast has hit.
			RaycastHit hit;
			
			// To decrease the amount of ammo as the player shoot.
			currentAmmo--;

			if (Physics.Raycast(FPSCamera.transform.position, FPSCamera.transform.forward, out hit, weaponRange))
			{ 
				// To display the object name that was hit.
				Debug.Log(hit.transform.name);
				
				// To get a reference to a ShootableTargets_LevelTwo script of the target that was hit.
				ShootableTargets_LevelTwo ShootableTarget = hit.transform.GetComponent<ShootableTargets_LevelTwo>();
				
				// If a shootable target was hit,
				if (ShootableTarget != null)
				{
					// The shootable target take the gun damage. 
					ShootableTarget.TakeDamage(gunDamage);
				}
				
				// To check if the object we hit has a rigidbody attached.
				if (hit.rigidbody != null)
				{
					// To add force to the rigidbody we hit, in the direction from which it was hit.
					hit.rigidbody.AddForce(-hit.normal * hitForce);
				}
				
				// To instantiate the impactEffect.
				GameObject impactGo = Instantiate(impactEffect, hit.point, Quaternion.LookRotation(hit.normal));
				
				// To destroy the gameObject impactGo after 1 second.
				Destroy(impactGo, 1.0f);

			}
		}
		
		IEnumerator Reload()
		{
			isReloading = true;
			//Debug.Log("Reloading...");
			
			// To set the animator's "isReloading" to true.
			weaponHolderAnimator.SetBool("isReloading", true);
			
			yield return new WaitForSeconds(reloadTime - 0.25f);
			weaponHolderAnimator.SetBool("isReloading", false);
			yield return new WaitForSeconds(0.25f);
			
			// To set the current ammo to max amount of ammo after reloading.
			currentAmmo = maxAmmo;
			
			// To set isReloading to false.
			isReloading = false;
		}
			
	}

}
