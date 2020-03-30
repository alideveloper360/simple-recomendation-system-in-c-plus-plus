#include <iostream>
#include"Book.h"
#include"User.h"
using namespace std;
class Library
{
private:
	int numBooks;
	int numUsers;
public:
	Library();
	int readBooks();
	int	readRatings();
	void viewRatings(string, int);
	void printAllBooks();
	void addUser(string);
	void updateRating(string, string,int);
	void getRecommendations(string);
};