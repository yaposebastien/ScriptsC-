#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;

int main() 
{
//Open a file
ifstream input("message.txt");

if (input.fail()) {
	cout << "The file does not exist" << endl;
	return 0;
	}
// Reading the data from lines
string message;
while (!input.eof()) {
	getline(input, message, '#');
	cout << message << endl;
	}
system("gammu --sendsms TEXT +01122547304645 < message.txt");
input.close();
cout << "done" << endl;
return 0;
}
