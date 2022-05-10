using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using Hellmade.Sound;

public class MainMenuScript : MonoBehaviour
{
    public Canvas mainMenuCanvas;
    public Canvas optionsCanvas;
    public Canvas levelSelectCanvas;
    public Slider musicSlider;
    public Slider soundSlider;
    public AudioClip music;
    public AudioClip sound;

    // Start is called before the first frame update
    void Start()
    {
        // Main Menu Canvas
        if (mainMenuCanvas != null)
        {
            mainMenuCanvas.gameObject.SetActive(true);
        }
        //else
        //{
          //  Debug.LogError("mainMenuCanvas not set");
        //}

        // Options Canvas
        if (optionsCanvas != null)
        {
            optionsCanvas.gameObject.SetActive(false);
        }
       // else
        //{
         //   Debug.LogError("optionsCanvas not set");
        //}

        // Level Select Canvas
        if (levelSelectCanvas != null)
        {
            levelSelectCanvas.gameObject.SetActive(false);
        }
        //else
        //{
           // Debug.LogError("levelSelectCanvas not set");
       // }

        // Music Slider
        if (musicSlider != null)
        {
            musicSlider.value = EazySoundManager.GlobalMusicVolume;
        }
       // else
       // {
         //   Debug.LogError("musicSlider not set");
       // }

        // Sound Slider
        if (soundSlider != null)
        {
            soundSlider.value = EazySoundManager.GlobalSoundsVolume;
        }
        //else
        //{
          //  Debug.LogError("soundSlider not set");
      //  }

        EazySoundManager.PlayMusic(music, EazySoundManager.GlobalMusicVolume, true, false);
    }

    // Go to LevelOne Scene
    public void GoToLevelOne()
    {
        Time.timeScale = 1;
        SceneManager.LoadScene(1);
    }

    // Go to LevelTwo Scene
    public void GoToLevelTwo()
    {
        Time.timeScale = 1;
        SceneManager.LoadScene(2);
    }

    // Quit Game
    public void QuitGame()
    {
        Application.Quit(); // note: only works when build + run
    }

    // Play Sound
    public void PlaySound()
    {
        EazySoundManager.PlaySound(sound);
    }
    
    public void ChangeMusicVolume(Slider slider)
    {
        EazySoundManager.GlobalMusicVolume = slider.value;
    }

    public void ChangeSoundVolume(Slider slider)
    {
        EazySoundManager.GlobalSoundsVolume = slider.value;
    }
    
}
