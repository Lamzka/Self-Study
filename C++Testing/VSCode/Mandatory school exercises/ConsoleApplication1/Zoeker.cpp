#include <iostream> 
#include <cstdlib>
#include <ctime>
#include <map>
#include <list>

using namespace std;

void SetInMap(string InputName);
void SeperateInput();


list<string> scripts{"maan", "zon", "3", "ster", "zon", "planeten", "2", "zon", "maan", "4", "ster", "3", "kompas", "5", "zon", "maan", "planeten", "6", "ster", "7", "maan", "zon", "planeten", "8", "maan", "ster", "zon", "9", "planeten", "10", "maan", "zon", "11", "ster", "12", "zon", "13"};

map<string, int> Input;


bool DoesHaveInt(const string& str, int& result)
{
	
	try 
	{
		result = std::stoi(str);

		return true
	}
	
}

int main()
{
	SeperateInput();



	

}

void SeperateInput() 
{
	long CurrentAmount;

	for(string script : scripts)
	{
		if(DoesHaveInt(script))
		{
			CurrentAmount * stoi(script);
		}
		else if(!script.count(script))
		{
			float currentCount = 10;

			Input[script] = currentCount;
			currentCount += 10;
		}

	}
}

void SetInMap(string InputName)
{
   
	

}


