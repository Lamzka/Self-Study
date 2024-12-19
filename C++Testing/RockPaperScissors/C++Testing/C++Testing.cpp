#include <iostream> 
#include <cstdlib>
#include <ctime>

using namespace std;

string UserInput;

string RightAwnsers[9] = { "ROCK","Rock","rock", "PAPER", "Paper","paper", "SCISSORS", "Scissors", "scissors" };



void GameStart();
void CheckAwsner();
void GenerateCPUAwnser();

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
    CheckAwsner();
}

void CheckAwsner()
{
    bool ValidAwnser = NULL;

    for (int i = 0; i < sizeof(RightAwnsers) / sizeof(RightAwnsers[0]); i++)
    {
        if (UserInput == RightAwnsers[i])
        {
            ValidAwnser = true;
            GenerateCPUAwnser();
        }
    }

    if (!ValidAwnser)
    {
       cout << "please choose one of these Values\n";

      for (int i = 0; i < sizeof(RightAwnsers) / sizeof(RightAwnsers[0]); i++)
       {
          cout << RightAwnsers[i] << endl;
       }

        GameStart();
    }

    void GenerateCPUAwnser()
    {
        srand(time(NULL));
        int RandNumber = (rand() * 1.0 / RAND_MAX * 3) + 1;
    }

