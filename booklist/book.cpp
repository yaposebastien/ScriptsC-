#include "book.h"
#include <sstream>
using namespace std;

Book::Book(const string newTitle, const string newAuthor, const int newPages)
{
title = newTitle;
author = newAuthor;
pages = newPages;
}

Book::Book()
{
title = " ";
author = " ";
pages = 0;
}

string Book::getBookTitle() const
{
return title;
}
string Book::getBookAuthor() const
{
return author;
}
int Book::getBookPages() const
{
return pages;
}
void Book::setBookTitle(const string& title)
{
this->title = title;
}
void Book::setBookAuthor(const string& author)
{
this->author = author;
}
void Book::setBookPages(const int& pages)
{
this->pages = pages;
}

string Book::toString()
{
stringstream ss;
ss << "Book " << " " << title << " " << "was writen by " << author << " " << "with " << " " << pages << endl;
return ss.str();
}
