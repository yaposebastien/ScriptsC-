#ifndef CONTACT_H
#define CONTACT_H
#include <string>

using namespace std;
class Contact
{
public:
/*
Ces deux lignes permettent de creer le constructeur de la classe 
et la classe elle-meme par defaut. Lister les variables de la classe et les
methodes de la classe.
*/
Contact();
Contact(const string nouvNomContact, const string nouvPhoneContact, const string nouvEmailContact);

string obtenirNomContact() const;
string obtenirPhoneContact() const;
string obtenirEmailContact() const;

void attribuerNomContact(const string& nom);
void attribuerPhoneContact(const string& phone);
void attribuerEmailContact(const string& email);
string affichageContact();

private:
string nom;
string phone;
string email;

};
#endif



