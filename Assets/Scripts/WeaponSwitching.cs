using UnityEngine;

public class WeaponSwitching : MonoBehaviour
{
	
	public int SelectedWeapon = 0;
	
    // Start is called before the first frame update
    void Start()
    {
		// To call SelectWeapon()
        SelectWeapon();
    }

    // Update is called once per frame
    void Update()
    {
		// To set variable previousSelectedWeapon as SelectedWeapon.
		int previousSelectedWeapon = SelectedWeapon;
		
		// To let the player switch between the 5 weapons using mouse scroll wheel.
		if (Input.GetAxis("Mouse ScrollWheel") > 0f)
		{
			if (SelectedWeapon >= transform.childCount - 1)
				SelectedWeapon = 0;				
			else
				SelectedWeapon++;	
		}
		
		if (Input.GetAxis("Mouse ScrollWheel") < 0f)
		{
			if (SelectedWeapon <= 0)
				SelectedWeapon = transform.childCount - 1;		
			else
				SelectedWeapon--;	
		}
		
		// To let the player switch between the 5 weapons using number keys 1 to 5
		if (Input.GetKeyDown(KeyCode.Alpha1))
		{
			SelectedWeapon = 0;		
		}		
		
		if (Input.GetKeyDown(KeyCode.Alpha2) && transform.childCount >= 2)
		{
			SelectedWeapon = 1;		
		}
		
		if (Input.GetKeyDown(KeyCode.Alpha3) && transform.childCount >= 3)
		{
			SelectedWeapon = 2;		
		}

		if (Input.GetKeyDown(KeyCode.Alpha4) && transform.childCount >= 4)
		{
			SelectedWeapon = 3;		
		}		
	
		if (Input.GetKeyDown(KeyCode.Alpha5) && transform.childCount >= 5)
		{
			SelectedWeapon = 4;		
		}
	
		//If the previousSelectedWeapon is not equal to the selected weapon,
		if (previousSelectedWeapon != SelectedWeapon)
		{
			// Calls the SelectWeapon(). 
			SelectWeapon();
		}
    }
	
	void SelectWeapon()
	{
		// To set currentWeapon as 0;
		int currentWeapon = 0; 
		
		foreach (Transform weapon in transform)
		{
			// If current weapon is the same as selected weapon, set active to true, 
			if (currentWeapon == SelectedWeapon)
				weapon.gameObject.SetActive(true);
			else
			// else, set active to false.
				weapon.gameObject.SetActive(false);
				
			// To increase the count of currentWeapon.
			currentWeapon++;
		}		
	}
}
