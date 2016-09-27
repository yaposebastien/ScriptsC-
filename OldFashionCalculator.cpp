#include<iostream>
using namespace std;

int main(){

  string operand;
  int numb1, numb2;
  float result;

  cout << "Welcome the old fashion calculator" << endl;
  cout << "- for soustraction, + for addition, * for multiple, / for division" <<endl;
  cout << "Please enter your operand" << endl;
  cin >> operand;  
  cout << "Please enter your first number." << endl;
  cin >> numb1 ;
  cout << "Please enter your second number." << endl;
  cin >> numb2;

  if (operand == "+")
    {
      result = numb1 + numb2;
      cout << " The addition of " << numb1 << " and " << numb2 << " is :" << result <<endl;
    }
  
  else if (operand == "-")
    {
      result = numb1 -numb2;
       cout << " The soustraction of " << numb1 << " and " << numb2 << " is :" << result <<endl;
       
    }

  else if (operand == "*")
    {
      result = numb1*numb2;
       cout << " The multiplication of " << numb1 << " and " << numb2 << " is :" << result <<endl;
    }

  else if (operand == "/")
    {
      //cout.setf(ios::fixed); // Make function cout prints floats with fixed number of decimals.
      //cout.setf(ios::showpoint);
      cout.precision(2); // Cout function sets this number of floats to be 2 (e.g 1.88 or 2.50)
      result = numb1/numb2;
      cout << "The division of " << numb1 << " by " << numb2 << " is :" << numb1/numb2 << endl;
      
    } 

  else if (operand != "+" || operand != "-" || operand != "*" || operand != "/")
    {
      cout << "Please enter the right operand." << endl;
    }
	   
    return 0;
}
