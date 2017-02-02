#include <iostream>
#include <time.h>
#include <cstdlib>

void loadingArray(int RandomIntegersArray[], int SizeOfArray);
void  searchGuessNumber(int numberGuessed, int searchArray[], int SizeToSearch, bool numberOfTimes);
void printingArray(int printArray[], int SizeToPrint);

using namespace std;

int main() 
{
int Size = 15;
int integersList[Size];
int numberGuessedByUser;

//Loading the array of integers
loadingArray(integersList,Size);

    for(int i=0; i<5; i++)
    {
    bool numberOfTimesChecking;
    cout << "Please can you enter a number between 0 and 25 : " ;
    cin >> numberGuessedByUser;
    numberOfTimesChecking = true;
    searchGuessNumber(numberGuessedByUser,integersList,Size,numberOfTimesChecking);
    }
//Display Array
cout << "The content of the array is the following : " << endl;
printingArray(integersList,Size);
cout << "\n";

return 0;
}

void loadingArray(int RandomIntegersArray[], int SizeOfArray)
{
SizeOfArray = 15;
srand(time(NULL));
    for(int i=0; i< SizeOfArray; i++)
    {
   RandomIntegersArray[i]= rand() % 25 + 1;
    }
}

void printingArray(int printArray[], int SizeToPrint)
{
SizeToPrint = 15;
    for(int i=0; i<SizeToPrint; i++)
    {
    cout << printArray[i] << "," << " " ;
    }

}

void  searchGuessNumber(int numberGuessed, int searchArray[], int SizeToSearch, bool numberOfTimes)
{
   
    SizeToSearch = 15;
    for(int i=0; i< SizeToSearch; i++)
    {
        if(numberGuessed == searchArray[i] && numberOfTimes == true)
        {
        cout << "Congratulation! The number  " << searchArray[i] << " was found" << endl;
        break;
        }
        else 
        {
        cout << "Sorry! Can you try again" << endl;
        break;
        }
    }   
}
