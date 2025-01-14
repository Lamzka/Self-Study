#include <iostream> 
#include <cstdlib>
#include <ctime>
#include <unordered_map>


using namespace std;

string UserInput;

string RightAnswer[9] = { "ROCK","Rock","rock", "PAPER", "Paper","paper", "SCISSORS", "Scissors", "scissors" };

int RandNumber;

void SetAnswersID();
void GameStart();
void CheckAnswer();
void GenerateCPUAnswer();
void CompareAnswers();

int main()
{
    srand(time(NULL));

    SetAnswersID();
    GameStart();

    return 0;
}

void SetAnswersID()
{
    unordered_map<string, int> Answers;

    Answers["ROCK"] = 1;
    Answers["Rock"] = 1;
    Answers["rock"] = 1;

    Answers["PAPER"] = 2;
    Answers["Paper"] = 2;
    Answers["paper"] = 2;

    Answers["SCISSORS"] = 3;
    Answers["Scissors"] = 3;
    Answers["scissors"] = 3;
}

void GameStart()
{
    UserInput = "";
    cout << "ROCK, PAPER, SCISSORS\n";
    cout << "what shall you choose?\n";
    cin >> UserInput;
    system("cls");
    CheckAnswer();
}

void CheckAnswer()
{
    bool ValidAwnser = NULL;


    //will be removed later
   /* for (int i = 0; i < sizeof(RightAnswer) / sizeof(RightAnswer[0]); i++)
    {
        if (UserInput == RightAnswer[i])
        {
            ValidAwnser = true;
            GenerateCPUAnswer();
        }
    }

    if (!ValidAwnser)
    {
       cout << "please choose one of these Values\n";

      for (int i = 0; i < sizeof(RightAnswer) / sizeof(RightAnswer[0]); i++)
       {
          cout << RightAnswer[i] << endl;
       }

        GameStart();
    }*/
}

    void GenerateCPUAnswer()
    {  
        RandNumber = rand() % 9 + 1;
        cout << RandNumber;
    }

    void CompareAnswers()
    {

    }


