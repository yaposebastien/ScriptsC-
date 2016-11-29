#include <iostream>
using namespace std;

int main() {

int numberOne;

cout << "Please enter a number" << endl;
cin >> numberOne;

int* pointerNumberOne = &numberOne;

cout << "The value of the number is : " << numberOne << endl;
cout << "The address value of the pointer of this number is : " << pointerNumberOne << endl; 

return 0;
}
