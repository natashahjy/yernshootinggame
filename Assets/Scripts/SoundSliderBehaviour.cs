using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class SoundSliderBehaviour : MonoBehaviour, IEndDragHandler
{
    public MainMenuScript mainMenuScript;
    // Start is called before the first frame update
    void Start()
    {
        mainMenuScript = GameObject.FindObjectOfType<MainMenuScript>();
       // if (mainMenuScript == null)
       // {
         //   Debug.LogError("Main Menu Script Not Found");
       // }
    }

    public void OnEndDrag(PointerEventData data)
    {
        mainMenuScript.PlaySound();
    }
}
