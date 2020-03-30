#include<fstream>
#include<string>
#include<sstream>  
#include"Library.h"
string book[50] = { "The Hitchhiker's Guide To The Galaxy", "Watership Down ", "The Five People You Meet in Heaven ", "Speak ", "I Know Why the Caged Bird Sings ", "Thirteen Reasons Why" };
string user[100][7] = { { "Akriti", "2", "5", "2", "5", "3", "4" }, { "Ninja", "2", "3", "1", "4", "5", "3" }, { "joan", "2", "1", "3", "4", "4", "5" } };

Library::Library()
{

}

int Library::readBooks()
{
	int count = 0;
	ifstream infile;
	infile.open("Books.txt");
	if (infile.fail())
	{
		cout << "Your file does not work";
	}
	else
	{
		string s;
		
		while (getline(infile, s))
		{
			count++;
		}
	}
	return count;
}
int Library::readRatings()
{
	int count = 0;
	ifstream infile;
	infile.open("ratings.txt");
	if (infile.fail())
	{
		cout << "Your file does not work";
	}
	else
	{
		string s;

		while (getline(infile, s))
		{
			count++;
		}
	}
	
	count = count / 2;
	return 3;
}
void Library::viewRatings(string username, int rating)
{
	/*string book[50] = { "The Hitchhiker's Guide To The Galaxy", "Watership Down ", "The Five People You Meet in Heaven ", "Speak ", "I Know Why the Caged Bird Sings ", "Thirteen Reasons Why" };
	string user[100][7] = { { "Akriti", "2", "5", "2", "5", "3", "4" }, { "Ninja", "2", "3", "1", "4", "5", "3" }, { "joan", "2", "1", "3", "4", "4", "5" } };
*/
	stringstream ss;
	ss << rating;
	string s1;
	ss >> s1;

	for (int i = 0; i < 100; i++)
	{
		if (user[i][0] == username){
			for (int j = 1; j < 7; j++){
				if (user[i][j] == s1 || user[i][j]>s1)
				{
					cout << "Title : " << book[j] << endl;
					cout << "Rating : " << user[i][j] << endl;
				}
			}
		}
	
	}
}
void Library::printAllBooks()
{
	string book[50] = { "The Hitchhiker's Guide To The Galaxy", "Watership Down ", "The Five People You Meet in Heaven ", "Speak ", "I Know Why the Caged Bird Sings ", "Thirteen Reasons Why" };
	for (int i = 0; i < 6; i++)
	{
		cout <<"Book "<<i+1<<" : "<< book[i] << endl;
	}
}
void Library::addUser(string U_user)
{
	string user = U_user;
	cout << "Welcome to " << U_user << endl;
}
void Library::updateRating(string username, string title, int rating)
{
	for (int i = 0; i < 100; i++)
	{
		if (user[i][0] == username){
			for (int j = 0; j < 6; j++)
			{
				if (book[j] == title)
				{
					user[i][j] = rating;
				}
			}
		}
	}
}
void Library::getRecommendations(string name)
{
	cout << "Here is the list of recommendations" << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << book[i] << endl;
	}
};


