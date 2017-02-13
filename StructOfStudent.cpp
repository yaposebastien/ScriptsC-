#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;


struct student {

int idstudent;
string firstNameStudent;
string lastNameStudent;

};


int main() {

student newStudentList;
const int ROW=10;
string arrayStudent[ROW];
string idstu;
string firstName;
string lastName;

cout << "Registration of Student\n" << endl;

//Filling the array
for(int i=0; i<ROW; i++) {


cout << "Enter ID : ";
cin >> idstu;
newStudentList.idstudent= ;
arrayStudent[i]=newStudentList.idstudent;

cout << "Enter first name : " ;
cin >> arrayStudent[i][j];
arrayStudent[i][j]
arrayStudent[i][j]=newStudentList.firstNameStudent;

cout << "Enter last name : " ;
cin >> arrayStudent[i][j];
arrayStudent[i][j]=newStudentList.lastNameStudent;

}
}
system("clear"); // For Gnu/Linux operating System
system("cls"); //For Windows Operating System

//Display the array 
cout << " List of Students " << endl;
cout << "ID, " ;
cout << "First name, " ;
cout << "Last name : " << endl ;


for(int i=0; i<ROW; i++) {
    for(int j=0; j<COL; j++) {
cout << i+1 << ", " ;
cout << arrayStudent[i][j] << ", ";
cout << arrayStudent[i][j] << endl;
}
}

return 0;

}

