#include <iostream>
using namespace std;

int main() {

int numberOne;

cout << "Please enter a number" << endl;
cin >> numberOne;

//Assign pointer to the variable numberOne.
int* pointerNumberOne = &numberOne;

//Print the value of number
cout << "The value of the number is : " << numberOne << endl; 

//Print the pointer's address
cout << "The address value of the pointer of this number is : " << pointerNumberOne << endl; 

return 0;
}
