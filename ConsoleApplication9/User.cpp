#include"User.h"
User::User()
{
	username = "";
	for (int i = 0; i < 50; i++)
	{
		for (int j = 0; j < 2; j++)
		{

			ratings[i][j] = 0;
		}
	}
}
void User::setUsername(string U_name)
{
	username = U_name;

}
bool User::setRatingAt(int index, int rate)
{
	
	//ratings[row][0] = username;
	if (rate ==0 || rate == 1 || rate == 2 || rate == 3 || rate == 4 || rate == 5)
	{
		ratings[row][col] = index;
		ratings[row][col + 1] = rate;
		row++;
		col++;
		return true;
	}
	else
	{
		return false;
	}
}
string User::getUsername()
{
	return username;
}
int User::getRatingAt(int inde)
{
	int value=-1;
	//value=ratings[inde][1];
	for (int i = 0; i < 50; i++)
	{
		
			if (ratings[i][1] == inde){
				value = ratings[i][2];
				break;
			}
			
	}
	return value;
}