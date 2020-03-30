#include <iostream>
using namespace std;
class User
{
private:
	string username;
	int ratings[50][2];
	int row = 0;
	int col = 1;
public:
	User();
	void setUsername(string);
	bool setRatingAt(int, int);
	string getUsername();
	int getRatingAt(int);
};