#include <iostream>
#include <string>
#include "contact.h"
using namespace std;

int main() {
string nomContact;
string phoneContact;
string emailContact;
char ch;
//Creation d'un pointeur pour recevoir la liste des contacts
Contact contacts[4];
Contact *ptr = contacts;
Contact Cont1("Paul Landry","+22547304546","yaposebastien@gmail.com");
Contact Cont2;

cout << "Entrer nom contact : " ;
getline(cin,nomContact);
cout << "Entrer email du contact : ";
getline(cin,emailContact);
cout << "Entre numero du contact :";
getline(cin,phoneContact);
//cin.get(ch);
Cont2.attribuerNomContact(nomContact);
Cont2.attribuerPhoneContact(phoneContact);
Cont2.attribuerEmailContact(emailContact);


cout << Cont1.affichageContact() << endl;
cout << Cont2.affichageContact() << endl;
return 0;
}

