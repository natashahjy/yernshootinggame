using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;


public class ShootableTargets : MonoBehaviour {

	public GameManagerScript score;
	//The box's current health point total
	int health;
	public int maxHealth = 3;
	public Slider healthBar;

	public GameObject player;
	public GameObject explode;
	public GameObject hit;
	public GameObject explosion;
	
	private void Start()
    {
        {
			
			score = GameObject.FindObjectOfType<GameManagerScript>();
			
			player = GameObject.FindGameObjectWithTag("Player");
			
			//if (maxHealth < 1)
           // {
			//	Debug.LogError("Max health must be at least 1");
            //}

			//set current health to maxhealth
			health = maxHealth;

			if (healthBar != null)
			{
				healthBar.value = 3;
			}

			//else
           // {
			//	Debug.LogError("No Health Bar");
            //}
		}
    }

	public void Damage(int damageAmount)
	{
		//subtract damage amount when Damage function is called
		health -= damageAmount;
		healthBar.value = (float)health / (float)maxHealth;
		Instantiate(hit, transform.position, Quaternion.identity);

		//Check if health has fallen below zero
		if (health <= 0) 
		{
			//if health has fallen below zero, deactivate it 
			gameObject.SetActive (false);
			score.IncreaseScore();
			GameObject explosionGo = Instantiate(explosion, transform.position, Quaternion.identity);
			GameObject explodeGo = Instantiate(explode, transform.position, Quaternion.identity);
			
			Destroy(explosionGo, 1.5f);	
			Destroy(explodeGo, 1.5f);
		}

		
	}

	//allow the health bar to be facing the player at all times
	void Update()
    {
		healthBar.transform.parent.rotation = Quaternion.LookRotation(transform.position - Camera.main.transform.position);
		if (health < 1)
        {

			Destroy(gameObject);
	
		}
	}
}
