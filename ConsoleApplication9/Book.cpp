#include "Book.h"
Book::Book()
{
	author = "";
	title = "";
}
Book::Book(string B_title,string B_author)
{
	author = B_author;
	title = B_title;
}
string Book::getAuthor()
{
	return author;
}
string Book::getTitle()
{
	return title;
}
void Book::setAuthor(string B_author)
{
	author = B_author;
}
void Book::setTitle(string B_title)
{
	title = B_title;
}