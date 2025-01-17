#include <iostream> 
#include <ctime>
#include <map>
#include <list>
#include <string>
#include <stdexcept>

using namespace std;


void SeperateInput();


list<string> scripts{ "maan", "zon", "3", "ster", "zon", "planeten", "2", "zon", "maan", "4", "ster", "3", "kompas", "5", "zon", "maan", "planeten", "6", "ster", "7", "maan", "zon", "planeten", "8", "maan", "ster", "zon", "9", "planeten", "10", "maan", "zon", "11", "ster", "12", "zon", "13" };

map<string, int> Input;

int currentCount = 10;

long long CurrentAmount;

bool TryParse(const string& str, int& result)
{

	try
	{
		result = stoi(str);

		return true;
	}
	catch (invalid_argument)
	{
		return false;
	}
	catch (out_of_range)
	{
		return false;
	}
	
}

int main()
{
	SeperateInput();
	cout << CurrentAmount << "\n";
}

void SeperateInput()
{
	int i;
	

	for (string script : scripts)
	{
		if (TryParse(script, i))
		{
			CurrentAmount = (CurrentAmount * i);
			
		}
		else if (!Input.count(script))
		{
			Input.insert({ script, currentCount });

			CurrentAmount += Input[script];

			currentCount += 10;
	
		}
		else if (Input.count(script))
		{
			CurrentAmount += Input[script];

			
		}

		
	}
	
}




