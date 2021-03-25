# include <fstream>
#include <iostream>
#include <string>

using namespace std;


bool IsLoggedIn();

int main()
{
	string username, password;
	int choice;

	cout << "1.) Register\n" << "2.) Login\n" << "Your decision: "; cin >> choice;

	if (choice == 1)
	{
		cout << "Create your username: "; cin >> username;
		cout << "Create your password: "; cin >> password;

		ofstream file;
		file.open(username + ".txt");

		file << username << endl << password;

		file.close();

		main();
	}
}


bool IsLoggedIn()
{
	string username, password, un, pw;

	cout << "Username: "; cin >> username;
	cout << "Password: "; cin >> password;

	ifstream read(username + ".txt");

	getline(read, un);
	getline(read, pw);

	if (un == username && pw == password)
	{
		cout << "Congratulations, successfully logged in!"
	}



	

	
}