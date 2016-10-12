#include <iostream>
using namespace std;

//This function performs conversion from Fahrenheit to Celsius.
int FahrenheitToCelsius(int FunctFahrenheit ) {
  int FunctResultCelsius;
  FunctResultCelsius = ((FunctFahrenheit -32)*5)/9;
  return FunctResultCelsius;
}

//This function performs conversion from Celsius to Fahrenheit.
int CelsiusToFahrenheit(int FunctCelsius) {
  int FunctResultFahrenheit;
  FunctResultFahrenheit = ((FunctCelsius*9)/5) + 32;
  return FunctResultFahrenheit;
}


int main()
{
  int UserTemperature, UserChoice; // Those variables are entered by user.
  int Fahrenheit, Celsius; // Those variables return the final values of temperature.

  cout << "Welcome, this program helps you to convert from Fahrenheit to Celsius and vice-versa" << endl;
  cout << "1 --> Convert Fahrenheit to Celsius" << endl;
  cout << "2 --> Convert Celsius to Fahrenheit " << endl;
  cout << "Please type your choice 1 or 2 " << endl;
  cin >> UserChoice;
  
  // This block of code performs convertion of Fahrenheit to Celsius.
  
  if (UserChoice == 1)
    {
      
      cout << "Please type your Fahrenheit degree value : ";
      cin >> UserTemperature;
      Celsius = FahrenheitToCelsius(UserTemperature);  //Calling the function FahrenheitToCelsius with the parameter typed by user.
      cout << "The result of " << UserTemperature << "°F " << "is " << Celsius << "°C " << endl;  	
    }

  // This blocks of else statement performs conversion of Celsius to Fahrenheit.
  
  else if (UserChoice == 2)
    {
      
      cout << "Please type your Celsius degree value : ";
      cin >> UserTemperature;
      Fahrenheit = CelsiusToFahrenheit(UserTemperature); //Calling the function CelsiusToFahrenheit with the parameter typed by user.
      cout << "The result of " << UserTemperature << "°C " << "is " << Fahrenheit << "°F " << endl;      
    }

  // This blocks displays an error message.
  
  else if (UserChoice != 1 && UserChoice !=2)
    {
      cout << "Sorry! wrong choice please type correct value " << endl;
    }
  
  return 0;
  
}
