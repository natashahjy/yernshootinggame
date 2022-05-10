using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityStandardAssets.Characters.FirstPerson;
using UnityEngine.SceneManagement;
using Hellmade.Sound;

public class GameManagerScriptLevel2 : MonoBehaviour
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
    //public RigidbodyFirstPersonController firstPersonController;
    public PlayerGun_LevelTwo playerGunPistol;
    public PlayerGun_LevelTwo playerGunAK;
    public PlayerGun_LevelTwo playerGunCarbine;
    public PlayerGun_LevelTwo playerGunShotgun;
    public PlayerGun_LevelTwo playerGunSniperRifle;
	public WeaponSwitching weaponSwitch;
    public InputField inputField;
    public Canvas enterName;
    string belowName;
    public Rigidbody player;
    int count = 0;
    public AudioClip sound;
    public AudioSource ending;
    public AudioSource start;
    public Text warning;
    public Animator timeAnim;
 
    // Start is called before the first frame update
    void Start()
    {
        timeAnim = GetComponent<Animator>();
        ending.GetComponent<AudioSource>();
        start.GetComponent<AudioSource>();

		firstPersonController.enabled = false;
		playerGunPistol.enabled = false;
		playerGunAK.enabled = false;
		playerGunCarbine.enabled = false;
		playerGunShotgun.enabled = false;
		playerGunSniperRifle.enabled = false;
		weaponSwitch.enabled = false;
		
        scoreText.gameObject.SetActive(true);
        startTimer.gameObject.SetActive(true);
        startImage.gameObject.SetActive(true);
        //PlayerPrefs.DeleteAll();
    }
    // Update is called once per frame
    void Update()
    {
        if (state == State.Start)
        {
            player.velocity = Vector3.zero;
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
            playerGunPistol.enabled = true;
            playerGunAK.enabled = true;
            playerGunCarbine.enabled = true;
            playerGunShotgun.enabled = true;
            playerGunSniperRifle.enabled = true;
			weaponSwitch.enabled = true;
            timeBeforeGameEnd -= Time.deltaTime;
            gameTimer.text = Mathf.Ceil(timeBeforeGameEnd).ToString();
            timerImage.fillAmount = timeBeforeGameEnd % 1;

            if (timeBeforeGameEnd <= 3)
            {
                timeAnim.SetTrigger("TimeEnding2");
                ending.gameObject.SetActive(true);
            }
            if (timeBeforeGameEnd < 0)
            {
                timeAnim.enabled = false;
                gameTimer.gameObject.SetActive(false);
                timerImage.gameObject.SetActive(false);
                Cursor.lockState = CursorLockMode.None;
                Cursor.visible = true;
                firstPersonController.enabled = false;
				playerGunPistol.enabled = false;
				playerGunAK.enabled = false;
				playerGunCarbine.enabled = false;
				playerGunShotgun.enabled = false;
				playerGunSniperRifle.enabled = false;
				weaponSwitch.enabled = false;
				
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
        SceneManager.LoadScene(2);
        Time.timeScale = 1;
        
    }
    void Pause()
    {
        Time.timeScale = 0;
        count = 1;
        state = State.Pause;
        setting.gameObject.SetActive(true);
        firstPersonController.enabled = false;
		playerGunPistol.enabled = false;
		playerGunAK.enabled = false;
		playerGunCarbine.enabled = false;
		playerGunShotgun.enabled = false;
		playerGunSniperRifle.enabled = false;
		weaponSwitch.enabled = false; 
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

