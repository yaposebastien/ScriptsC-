#include <iostream>
#include <string>
#include "customer.h"
using namespace std;

int main() {
int numberCustomer;
string nameCustomer;
char ch;
Customer Cust1(1,"Nke");
Customer Cust2;
cout << "Enter customer number : " ;
cin >> numberCustomer;
cin.get(ch);
cout << "Enter customer name : ";
getline(cin,nameCustomer);

Cust2.setNumberCustomer(numberCustomer);
Cust2.setNameCustomer(nameCustomer);

cout << Cust1.toString() << endl;
cout << Cust2.toString() << endl;
return 0;
}

