using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityStandardAssets.Characters.FirstPerson;
using UnityEngine.SceneManagement;
using Hellmade.Sound;

public class GameManagerScript : MonoBehaviour
{
    public enum State
    {
        Start,
        Game,
        Pause,
    }

    public int score;
    public Text scoreText;
    public Image timerImage;
    public Image startImage;
    public Text gameTimer;
    public Text startTimer;
    public float timeToStart;
    public float timeBeforeGameEnd;
    public State state;
    int belowScore;
    public Canvas setting;
    public Canvas message;
    public FirstPersonController firstPersonController;
    public PlayerGunShoot playerGun;
    public InputField inputField;
    public Canvas enterName;
    string belowName;
    public GameObject Target1;
    public int Target1ToCreate;
    public GameObject Target2;
    public int Target2ToCreate;
    public GameObject Target3;
    public int Target3ToCreate;
    int count = 0;
    public AudioClip sound;
    public Text warning;
    public AudioSource ending;
    public AudioSource start;
    public Animator timeAnim;

    ///// Ammo Count Text
    public Text ammoText;

    // Start is called before the first frame update
    void Start()
    {
        ending.GetComponent<AudioSource>();
        start.GetComponent<AudioSource>();
        timeAnim = GetComponent<Animator>();
        firstPersonController.enabled = false;
        playerGun.enabled = false;
        scoreText.gameObject.SetActive(true);
        startTimer.gameObject.SetActive(true);
        startImage.gameObject.SetActive(true);
        //PlayerPrefs.DeleteAll();

        //Creating random places with fixed amount
        if (Target1 == null)
        {
            Debug.LogError("No Spheres");
        }
        else
        {
            for (int i = 0; i < Target1ToCreate; i++)
            {
                Instantiate(Target1, new Vector3(Random.Range(-20, 20), 2, 5), Quaternion.identity);
            }
        }

        if (Target2 == null)
        {
            Debug.LogError("No Cube");
        }
        else
        {
            for (int i = 0; i < Target1ToCreate; i++)
            {
                Instantiate(Target2, new Vector3(Random.Range(-20, 20), 2, 25), Quaternion.identity);
            }
        }

        if (Target3 == null)
        {
            Debug.LogError("No Cylinder");
        }
        else
        {
            for (int i = 0; i < Target1ToCreate; i++)
            {
                Instantiate(Target3, new Vector3(Random.Range(-20, 20), 2, 45), Quaternion.identity);
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (state == State.Start)
        {
            timeToStart -= Time.deltaTime;
            startTimer.text = Mathf.Ceil(timeToStart).ToString();
            startImage.fillAmount = timeToStart % 1;

            start.gameObject.SetActive(true);

            if (timeToStart < 0)
            {
                state = State.Game;
                startTimer.gameObject.SetActive(false);
                startImage.gameObject.SetActive(false);
            }
        }

        if (Input.GetKeyDown(KeyCode.Escape))
        {
            if(count == 0)
            {
                Pause();
            }
            else if (count == 1)
            {
                Resume();
            }
        }

        if (state == State.Game) {

            gameTimer.gameObject.SetActive(true);
            timerImage.gameObject.SetActive(true);
            firstPersonController.enabled = true;
            playerGun.enabled = true;
            timeBeforeGameEnd -= Time.deltaTime;
            gameTimer.text = Mathf.Ceil(timeBeforeGameEnd).ToString();
            timerImage.fillAmount = timeBeforeGameEnd % 1;
            
            if(timeBeforeGameEnd <= 3)
            {
                ending.gameObject.SetActive(true);
                timeAnim.SetTrigger("TimeEnding");
            }
            if (timeBeforeGameEnd < 0)
            {
                timeAnim.enabled = false;
                gameTimer.gameObject.SetActive(false);
                timerImage.gameObject.SetActive(false);
                Cursor.lockState = CursorLockMode.None;
                Cursor.visible = true;
                firstPersonController.enabled = false;
                playerGun.enabled = false;

                    if (score < PlayerPrefs.GetInt(10.ToString(), 0))
                    {
                        message.gameObject.SetActive(true);
                    }
                    else
                    {
                        enterName.gameObject.SetActive(true);
                    }

            }
        }
            
    }

    ///// Update Ammo Count
    public void updateAmmo(int currentAmmo)
    {
        ammoText.text = $"Ammo: {currentAmmo}";
    }

    public void IncreaseScore()
    {
        score += 1;
        scoreText.text = "Score: " + score.ToString();

    }

    public void OnClickMenu()
    {
        Time.timeScale = 0;
        SceneManager.LoadScene(0);
    }

    public void OnClickReset()
    {
        PlaySound();
        SceneManager.LoadScene(1);
        Time.timeScale = 1;
        
    }
    void Pause()
    {
        Time.timeScale = 0;
        count = 1;
        state = State.Pause;
        setting.gameObject.SetActive(true);
        firstPersonController.enabled = false;
        playerGun.enabled = false;
        Cursor.lockState = CursorLockMode.None;
        Cursor.visible = true;
        start.Pause();
        ending.Pause();
    }

    public void Resume()
    {
        Time.timeScale = 1;
        count = 0;
        state = State.Start;
        setting.gameObject.SetActive(false);
        Cursor.lockState = CursorLockMode.Locked;
        Cursor.visible = false;
        start.Play();
        ending.Play();
    }

    public void PlaySound()
    {
        EazySoundManager.PlaySound(sound);
    }

    public void SaveNameOfHighScorePlayer()
    {
        if (inputField.text == "")
        {
            warning.text = " CANNOT BE EMPTY ";
        }
        else
        {
            for (int i = 10; i >= 1; i--)
            {
                if (score >= PlayerPrefs.GetInt(i.ToString(), 0)) //2 1
                {
                    belowScore = PlayerPrefs.GetInt(i.ToString(), 0); //1
                    belowName = PlayerPrefs.GetString("HighScorePlayerName" + i.ToString(), ""); //1
                    PlayerPrefs.SetInt((i + 1).ToString(), belowScore); //1
                    PlayerPrefs.SetString(("HighScorePlayerName" + (i + 1)).ToString(), belowName); //1
                }
                if (score == PlayerPrefs.GetInt(i.ToString(), 0))
                {
                    PlayerPrefs.SetInt(i.ToString(), score);
                    PlayerPrefs.SetString("HighScorePlayerName" + i.ToString(), inputField.text);
                    break;
                }
                if (score < PlayerPrefs.GetInt(i.ToString(), 0))
                {
                    PlayerPrefs.SetInt((i + 1).ToString(), score);
                    PlayerPrefs.SetString("HighScorePlayerName" + (i + 1).ToString(), inputField.text);
                    break;
                }
                if (i == 1)
                {
                    PlayerPrefs.SetInt(i.ToString(), score);
                    PlayerPrefs.SetString("HighScorePlayerName" + i.ToString(), inputField.text);
                    enterName.gameObject.SetActive(true);
                }
            }

            SceneManager.LoadScene(0);
        }
    }


}

