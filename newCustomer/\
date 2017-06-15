#include "customer.h"
#include <sstream>
using namespace std;
//int numberCustomer;
//string nameCustomer;

Customer::Customer(const int newNumberCustomer, string newNameCustomer)
{
number = newNumberCustomer;
name = newNameCustomer;
}

Customer::Customer()
{
number = 0;
name = " ";
}


int Customer::getNumberCustomer() const 
{
return number;
}

string Customer::getNameCustomer() const
{
return name;
}

void Customer::setNameCustomer(const string& name)
{
this->name = name;
}

void Customer::setNumberCustomer(const int& number)
{
this->number = number;
}
string Customer::toString() 
{
stringstream ss;
ss << "Customer number :" << " " << number  << " " << "name : " << name << endl;
return ss.str();
}

