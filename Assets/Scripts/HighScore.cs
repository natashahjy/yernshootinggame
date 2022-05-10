using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class HighScore : MonoBehaviour
{
    ///// Text fields
    public Text highscoreRankText;
    public Text highscoreNameText;
    public Text highscoreAmountText;

    ///// Individual string values of highscores
    string highscoreRank;
    string highscorePlayerName;
    string highscoreAmount;

    // Start is called before the first frame update
    void Start()
    {
        // top 10 high scores
        for (int i = 1; i <= 10; i++)
        {
            ///// Split rank, player name and amount for easier alignment
            highscoreRank += i.ToString() + "\n";
            highscorePlayerName += PlayerPrefs.GetString("HighScorePlayerName" + i.ToString(), "") + "\n";
            highscoreAmount += PlayerPrefs.GetInt(i.ToString(), 0).ToString() + "\n";
        }
        ///// assigning text value 
        highscoreRankText.text = highscoreRank;
        highscoreNameText.text = highscorePlayerName;
        highscoreAmountText.text = highscoreAmount;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
