// Filename https://github.com/yaposebastien/ScriptsC-/blob/master/MenuRestaurant.cpp
// This program displays the username and his selected food on the screen
#include <iostream>
#include <string.h>

using namespace std;

int main(){

  string UserInputName; //Variable for user name
  int UserChoice; // Variable for user's cuisine selection

  cout << "Welcome to your favorite restaurant menu selector" << endl; //Displays welcome message
  cout << "Please enter your name to continue" << endl; // Asks for user input
  getline(cin,UserInputName); // Get the user's name
  cout << "Hello " << UserInputName << " !,please select 1, 2 or 3 for your type of cuisine " << endl; //Displays message
 cout << "1----> For American Cuisine" << endl; //Displays message
 cout << "2----> For Asian Cuisine" << endl; //Displays message
 cout << "3----> For African Cuisine" << endl; //Displays message
 cout << " Your choice is : "; //Displays message
 cin >> UserChoice; // Get the user's answer for choice

 if (UserChoice == 1) {
   cout << "Excelllent Choice Mr/Ms " << UserInputName << " for our American Cuisine! " << endl;
 } // This block checks the number entered by the user.

 else if (UserChoice == 2) {
   cout << "Fantastic Choice Mr./Ms " << UserInputName << " for our Asian Cuisine! " << endl;
 } // This block checks the number entered by the user.

 else if (UserChoice == 3) {
   cout << "Good Choice Mr./Ms. " << UserInputName << " for our African Cuisine! " << endl;
 } // This block checks the number entered by the user.

 else {
   cout << "Please can you type an appropriate number! " << endl;
 } // This block informs the user when he typed a wrong number .
 
return 0;
}
