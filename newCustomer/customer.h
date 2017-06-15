#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>

using namespace std;
class Customer
{
public:
Customer(const int newNumberCustomer, const string newNameCustomer);
Customer();

int getNumberCustomer() const;
string getNameCustomer() const ;

void setNumberCustomer(const int& number);
void setNameCustomer(const string& name);
string toString();

private:
int number;
string name;

};
#endif



