#include "contact.h"
#include <sstream>
using namespace std;


Contact::Contact(const string nouvNomContact, string nouvPhoneContact, const string nouvEmailContact)
{
nom = nouvNomContact;
phone = nouvPhoneContact;
email = nouvEmailContact;
}

Contact::Contact()
{
nom = " ";
phone = " ";
email = " ";
}


string Contact::obtenirNomContact() const 
{
return nom;
}
string Contact::obtenirPhoneContact () const
{
return phone;
}
string Contact::obtenirEmailContact () const
{
return email;
}

void Contact::attribuerNomContact(const string& nom)
{
this->nom = nom;
}

void Contact::attribuerPhoneContact(const string& phone)
{
this->phone = phone;
}

void Contact::attribuerEmailContact(const string& email)
{
this->email = email;
}
string Contact::affichageContact() 
{
stringstream ss;
ss << "Contact:" << " " << nom  << " " << phone << " " << email << "-/-"<< endl;
return ss.str();

}

