#include<iostream>

#include"Library.h"
#include<string>
using namespace std;
int main(void)
{


	Library l1;

	string username;
	int rating;
	string user_name;
	string title;
	string user;
	string uu_name;
	//cout<<l1.readBooks()<<endl;
	int ch;
	
	do{
		cout << "\nSelect a numerical option:\n======Main Menu===== \n1. Read books \n2. Read ratings \n3. View ratings \n4. Print all books \n5. Update a rating  \n6. Add a user \n7. Get recommendations \n8. Quit \n";
		cin >> ch;
		switch (ch)
		{
		case 1:
			cout<<"Total Books : "<<l1.readBooks();
			break;
		case 2:
			cout<<l1.readRatings();
			break;
		case 3:

			cout << "Enter user name : ";
			cin >> username;

			cout << "Enter Rating : ";
			cin >> rating;
			l1.viewRatings(username, rating);
			break;
		case 4:
			l1.printAllBooks();
			break;
		case 5:

			cout << "Enter User Name : " << endl;
			cin >> user_name;

			cout << "Enter title : " << endl;
			cin >> title;
			int rate;
			cout << "Enter title : " << endl;
			cin >> rate;
			l1.updateRating(user_name, title, rate);
			break;
		case 6:
			cout << "Enter User Name : " << endl;

			cin >> user;

			l1.addUser(user);
			break;
		case 7:
			cout << "Enter User Name : " << endl;

			cin >> uu_name;
			l1.getRecommendations(uu_name);
			break;
		default:
			cout << "Invalid option " << endl;
			break;
		}
	} while (ch != 8);
	return 0;
}