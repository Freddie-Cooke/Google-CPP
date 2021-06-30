// main.cpp

#include <iostream>
#include "database.h"
#include "composer.h"

using namespace std;

int main() {

	system("cls");

	int in_menu;
	bool running = true;

	while (running) {

		Database composer_database;

		cout << "Composer Database\n"
				"--------------------------\n"
				"1) Add a new composer\n"
				"2) Retrieve a composers data\n"
				"3) Promote/demote a composer's rank\n"
				"4) List all composers\n"
				"5) Lost all composers by rank\n"
				"0) Quit\n" << endl;

		cout << "Enter: "; cin >> in_menu;

		switch(in_menu) {

			case 0:
				running = false;

			case 1:
				composer_database.AddComposer();

		}
	}

	system("pause");

	return 0;
}