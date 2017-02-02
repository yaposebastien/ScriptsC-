#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;


struct student {

string idstudent;
string firstNameStudent;
string lastNameStudent;

};


int main() {

student newStudentList;
const int ROW=10;
string arrayStudent[ROW];
string firstName;
string lastName;
string id;

cout << "Registration of Student\n" << endl;

//Filling the array
for(int i=0; i<ROW; i++) {


cout << "ID : ";
cin >> id;
newStudentList.idstudent= id;
arrayStudent[i]=newStudentList.idstudent;

cout << "Enter first name : " ;
cin >> firstName;
newStudentList.firstNameStudent=firstName;
arrayStudent[i]=newStudentList.firstNameStudent;

cout << "Enter last name : " ;
cin >> lastName;
newStudentList.lastNameStudent=lastName;
arrayStudent[i]=newStudentList.lastNameStudent;

}

system("clear"); // For Gnu/Linux operating System
system("cls"); //For Windows Operating System

//Display the array 
cout << " List of Students " << endl;
cout << "ID, " ;
cout << "First name, " ;
cout << "Last name : " << endl ;


for(int i=0; i<ROW; i++) {
cout << i+1 << ", " ;
cout << arrayStudent[i] << ", ";
cout << arrayStudent[i] << endl;
}


return 0;

}

