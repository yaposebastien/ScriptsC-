#include <iostream>
using namespace std;

int main() 
{
	int NumberHungryMan[10];
	int GreatestCookiesByHungryMan=0;
	int GreatestCookiesByHungryManIndex=0;

cout << "Please enter the number of Cookies ate by each person." << endl;

//This loop allows to prompt the user to enter number of cookies 

for(int i=0; i<10; i++)
	{
	cout << "Cookies ate by person # " << i+1 << ": " ;
	cin >> NumberHungryMan[i];
	}
	cout << " " << endl;
	cout << "-------------------------" << "Records of cookies ate by each person" << "---------------------------" << endl;
// This loop for displays the data stored in the array NumberHumgryMan.
for(int i=0; i<10; i++)
	{
	cout << "Person #" << i+1 << " ate " << NumberHungryMan[i] << " cookie(s)" << endl;
	}

GreatestCookiesByHungryMan = NumberHungryMan[0];

for(int i=1; i<10; i++)
	{
		if(NumberHungryMan[i] > GreatestCookiesByHungryMan) 
		{
		GreatestCookiesByHungryMan = NumberHungryMan[i];
		GreatestCookiesByHungryManIndex = i;
		}
	}
cout << "The person #" << GreatestCookiesByHungryManIndex + 1 << " is the most hungry with " << GreatestCookiesByHungryMan << " cookies devoured!." << endl;
return 0;
}
