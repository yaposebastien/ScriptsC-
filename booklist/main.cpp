#include <iostream>
#include <string>
#include "book.h"
using namespace std;

int main() {
string title;
string author;
int pages;
char ch;
//Create first the array and then the pointer
Book books[4];
Book *ptr = books;
Book Book1("The last lecture","Randy Pausch", 250);
Book Book2;

cout << "Title : " ;
getline(cin,title);
cout << "Author : ";
getline(cin,author);
cout << "Pages : ";
cin >> pages;
cin.get(ch);

Book2.setBookTitle(title);
Book2.setBookAuthor(author);
Book2.setBookPages(pages);

cout << Book1.toString() << endl;
cout << Book2.toString() << endl;
return 0;
}
