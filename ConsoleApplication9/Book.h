#include <iostream>
using namespace std;
class Book
{
private:
	string title;
	string author;
public:
	Book();
	Book(string ,string);
	string getTitle();
	string getAuthor();
	void setTitle(string);
	void setAuthor(string);
};
