#include <iostream>
using namespace std;

int main() {

int GradeValueOne,GradeValueTwo,total;
char GradeOne, GradeTwo;
string StudentName;

cout << "Please enter the student name" << endl;
getline(cin,StudentName);

cout << "Please enter the student first grade : " << endl;
cin >> GradeOne;

if(GradeOne == 'A') {
GradeValueOne = 5;
}
else if(GradeValueOne == 'B') {
GradeValueOne = 7;
}
else if(GradeValueOne == 'C') {
GradeValueOne = 7;
}
else if(GradeValueOne == 'D') {
GradeValueOne = 5;
}
else if(GradeValueOne == 'E') {
GradeValueOne = 8;
}
cout << "The student " << StudentName << " grade for the question 1 is : " << GradeValueOne << endl;

cout << "Please enter the student second grade : " << endl;
cin >> GradeTwo;


if(GradeTwo == 'A') {
GradeValueTwo = 10;
}
else if(GradeTwo == 'B') {
GradeValueTwo = 5;
}
else if(GradeTwo == 'C') {
GradeValueTwo = 8;
}
else if(GradeTwo == 'D') {
GradeValueTwo = 7;
}
else if(GradeTwo == 'E') {
GradeValueTwo = 5;
}


cout << "The student " << StudentName << " grade for the question 2 is : " << GradeValueTwo << endl;

total = GradeValueOne + GradeValueTwo;

if(total >=18 && total <20) {
cout << " Student : " << StudentName << endl;
cout << " Grade Question 1 : " << GradeValueOne << endl;
cout << "Grade Question 2 : " << GradeValueTwo << endl;
cout << "Total is : " << total << endl;
cout << "The final Grade is  : " << "A" << endl;
}


if(total >=16 && total <17) {
cout << " Student : " << StudentName << endl;
cout << " Grade Question 1 : " << GradeValueOne << endl;
cout << "Grade Question 2 : " << GradeValueTwo << endl;
cout << "Total is : " << total << endl;
cout << "The final Grade is  : " << "B" << endl;
}
 

if(total >=14 && total <15) {
cout << " Student : " << StudentName << endl;
cout << " Grade Question 1 : " << GradeValueOne << endl;
cout << "Grade Question 2 : " << GradeValueTwo << endl;
cout << "Total is : " << total << endl;
cout << "The final Grade is  : " << "C" << endl;
}


if(total >=10 && total <13) {
cout << " Student : " << StudentName << endl;
cout << " Grade Question 1 : " << GradeValueOne << endl;
cout << "Grade Question 2 : " << GradeValueTwo << endl;
cout << "Total is : " << total << endl;
cout << "The final Grade is  : " << "D" << endl;
}


if(total >=0 && total <9) {
cout << " Student : " << StudentName << endl;
cout << " Grade Question 1 : " << GradeValueOne << endl;
cout << "Grade Question 2 : " << GradeValueTwo << endl;
cout << "Total is : " << total << endl;
cout << "The final Grade is  : " << "F" << endl;
}
return 0;
}
