#include <iostream>
using namespace std;

int main() {
	
	int num1, num2, num3, ResultChoiceTot, ResultChoiceGreat;
	float ResultChoiceAv;
	string choice;
	char answer; 
	
	 
	 answer = 'y';
	 while(answer == 'y')   
	   {
	     
	 cout << "welcome to this three numbers program" << endl;
	 cout << " Please enter your first number "<< endl;
	 cin >> num1;
	 cout << "Please enter your second number "<< endl;
	 cin >> num2;
	 cout << "Please enter your third number " << endl;
	 cin >> num3;


	 cout << " Please select your operation"<< endl;
	 cout << "1 : Average"<< endl;
	 cout << "2 : Total"<< endl;
	 cout << "3 : Greatest"<< endl;
	 cin >> choice ;
	 
	  if (choice == "Average") {
	   cout.setf(ios::fixed); // Make function cout prints floats with fixed number of decimals.
	   cout.setf(ios::showpoint);
	   cout.precision(2); // Cout function sets this number of floats to be 2 (e.g 1.88 or 2.50)

	 	ResultChoiceAv = (num1 + num2 + num3)/3;
	 	cout << "The average of those numbers is :" << ResultChoiceAv << endl;
	 }
	 else if (choice == "Total") {
		ResultChoiceTot = num1 + num2 + num3;
	 	cout << "The total of those numbers is :" << ResultChoiceTot << endl;
	 }
	 else if (choice == "Greatest") {
	 	 if ((num1>num2) && (num1>num3)) {
		     ResultChoiceGreat=num1;
		  }
		 else if ((num2>num1) && (num2>num3)) {
		          ResultChoiceGreat=num2;
		       } 
		       else {
			  ResultChoiceGreat=num3;
			     }
		 cout << "The greatest of those numbers is :" << ResultChoiceGreat << endl;
       }
	 cout << "Do you want to continue ? y/n" << endl;
	 cin >> answer;
	   }
	 
	   }
	 
  
 
	 
		 
		//cout << "The average of those numbers is :" << ResultChoiceAv << endl;
		//cout << "The total of those numbers is :" << ResultChoiceTot << endl;

		
	
//cout << "Continue?? Y or N"	<< endl;
//cin >> answer;
//while (answer == "Y")	

	 
