/*Filename: attecoube.homelinux.com:/home/yaposebastien/ScriptsC++/MartianAgeCalculator.cpp */

// This program performs the calculation of Martian age.

/* Mars' Revolution Period to orbit the Sun is 1.88 earth years.  So it takes 1.88 of earth years to equal 1 Martian year.  In order to figure out an earthling's age according to Martian years you take the Earth age and divide it by 1.88*/
// Name : N'KE Sebastien Yapo
// Date : Thursday, September 6 2016


#include <iostream>
#include <string>
using namespace std;
int main () {
  string username;
  int userearthage;
  const float martianyear = 1.88;
  float usermartianage;

  cout << "Can you enter your name please?" << endl;
  getline(cin,username); // Waiting for users input -- name
  cout << "Hello " << username ;
  cout << " Welcome in the Martian Age Calculator!" << endl; /* Displays the welcoming message with the name entered by the user. */
  cout << "How old are you in Earth years?" << endl;
  cin >> userearthage; // Waiting for users input -- age in Earth years

  cout.setf(ios::fixed); // Make function cout prints floats with fixed number of decimals.
  cout.setf(ios::showpoint);
  cout.precision(2); // Cout function sets this number of floats to be 2 (e.g 1.88 or 2.50)

  usermartianage = userearthage / martianyear; // This formula calculates the Maritan age of the user.
  cout << "Your maritan Age is :" << usermartianage << endl; // Displays the age describes above.
  cout << "Thanks " << username << endl;
  return 0;
}
