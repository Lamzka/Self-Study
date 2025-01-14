#include <iostream> 
#include <cstdlib>
#include <ctime>

using namespace std;

string UserInput;

string RightAnswer[9] = { "ROCK","Rock","rock", "PAPER", "Paper","paper", "SCISSORS", "Scissors", "scissors" };



void GameStart();
void CheckAnswer();
void GenerateCPUAnswer();

int main()
{
    GameStart();
    return 0;
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

    for (int i = 0; i < sizeof(RightAnswer) / sizeof(RightAnswer[0]); i++)
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
    }
}

    void GenerateCPUAnswer()
    {
        srand(time(NULL));
        int RandNumber = (rand() * 1.0 / RAND_MAX * 3) + 1;
    }


