#ifndef BOOK_H
#define BOOK_H
#include <string>

using namespace std;
class Book
{
public:
Book();
Book(const string newTitle, const string newAuthor, const int newPages);

string getBookTitle() const;
string getBookAuthor() const;
int getBookPages() const;

void setBookTitle(const string& title);
void setBookAuthor(const string& author);
void setBookPages(const int& pages);
string toString();

private:
string title;
string author;
int pages;

};
#endif
