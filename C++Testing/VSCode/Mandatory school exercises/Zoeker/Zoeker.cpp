#include <iostream> 
#include <ctime>
#include <map>
#include <list>
#include <string>
#include <stdexcept>

using namespace std;



//List with Inputs that has to be decoded
list<string> Input{ "maan", "zon", "3", "ster", "zon", "planeten", "2", "zon", "maan", "4", "ster", "3", "kompas", "5", "zon", "maan", "planeten", "6", "ster", "7", "maan", "zon", "planeten", "8", "maan", "ster", "zon", "9", "planeten", "10", "maan", "zon", "11", "ster", "12", "zon", "13" };

map<string, int> StoredInputs; //stores a string and its value


int currentCount = 10; //current count for next new value

long long CurrentAmount; //output


void SeperateInput(); //Declare fucntion
bool TryParse(const string& str, int& result); //Declare fucntion

//main
int main()
{
	SeperateInput();
	cout << CurrentAmount << "\n";
}


void SeperateInput() 
{
	int i;
	for (string script : Input)
	{
		if (TryParse(script, i)) //if the string is/has a number: multiply with CurrentAmound
		{
			CurrentAmount = (CurrentAmount * i);
		}
		else if (!StoredInputs.count(script))  //if the string is not stored in StoredInputs: add it to StoredInputs with a value of currentCount
		{
			StoredInputs.insert({ script, currentCount });

			CurrentAmount += StoredInputs[script]; //add the value of the string to CurrentAmount

			currentCount += 10; //increment currentCount by 10
		}
		else if (StoredInputs.count(script)) //if the string is stored in StoredInputs: add the value of the string to CurrentAmount
		{
			CurrentAmount += StoredInputs[script];
		}
	}
}

bool TryParse(const string& str, int& result) //checks if string has a number and returns the number
{
	try //try to convert string to int
	{
		result = stoi(str);

		return true;
	}
	catch (invalid_argument) //if string is not a number return false
	{
		return false;
	}
	catch (out_of_range) //if string is not a number return false
	{
		return false;
	}

}


