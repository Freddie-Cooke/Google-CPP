// main.cpp, Freddie Cooke
// main file for database program

#include <iostream>
#include <string>
#include "database.h"
#include "composer.h"

using namespace std;

// Get input of the composers last name.
string GetComposerName() {
	string name;
	cout << "Composer's last name: "; cin >> name;
	cout << endl;
	return name;
}

int main() {
 
	int in_menu;
	Database composer_database;
	bool running = true;

	system("cls");

	while (running) {

		cout << "Composer Database\n"
				"--------------------------\n"
				"1) Add a new composer\n"
				"2) Retrieve a composers data\n"
				"3) Promote/demote a composer's rank\n"
				"4) List all composers\n"
				"5) List all composers by rank\n"
				"0) Quit\n" << endl;

		cout << "Enter: "; cin >> in_menu;
		system("cls");

		switch(in_menu) {

			case 0 :
				running = false;
				break;

			case 1 :
				{
					string first_name;
					string last_name;
					string genre;
					int yob;
					string fact;

					cin.ignore();
					cin.clear();

					cout << "First name: "; getline(cin, first_name);
					cout << "Last name: "; cin >> last_name;
					cout << "Genre: "; cin >> genre;
					cout << "Year of birth: "; cin >> yob;
					cout << "Fact: "; cin >> fact;
					cout << endl;

					composer_database.AddComposer(first_name, last_name, genre, yob, fact);
					break;
				}

			case 2 :
				composer_database.GetComposer(GetComposerName()).Display();
				break;

			case 3 :
				{
					int in_answer;
					cout << "Promote or demote (0/1) "; cin >> in_answer;
					if (in_answer == 0) {
						composer_database.GetComposer(GetComposerName()).Promote(1);
					}
					else {
						composer_database.GetComposer(GetComposerName()).Demote(1);
					}
					break;
				}

			case 4 :
				composer_database.DisplayAll();
				break;

			case 5 :
				composer_database.DisplayByRank();
				break;
		}
	}

	system("pause");

	return 0;
}
