#include <iostream>
using namespace std;


int main(int argc, char** argv) {
	
	int QuizScoreByUser;
	int MidScoreByUser;
	int FinalScoreByUser;
	int AverageScore;
	string StudentName;

	cout << "Can you type your name :" << endl;
	getline(cin,StudentName);
	cout  << "Can you enter your Quiz score :" << endl;
	cin >> QuizScoreByUser ;
	
	cout << "Can you enter your Mid-Term score :" << endl;
	cin >> MidScoreByUser ;
	
	cout << "Can your  enter your Final exam score :" << endl;
	cin >> FinalScoreByUser;
	
	AverageScore = (QuizScoreByUser+MidScoreByUser+FinalScoreByUser)/3;
	
	if (AverageScore >= 90) {
		
	  cout << StudentName << " Your grade for this course is A : " << AverageScore% << endl;
	}

	else if  (AverageScore >=70 && AverageScore < 90) {

	  cout << StudentName << " Your grade for this course is B :" << AverageScore << endl;
	  }

        else if (AverageScore >=50 && AverageScore < 70) {

	  cout << StudentName << " Your final grade for this course is C :" << AverageScore << endl; 
	}

	else if (AverageScore < 50 ) {

	  cout << StudentName << " Your final grade for this course is F : " << AverageScore << endl;
	}
	
	return 0;
}
