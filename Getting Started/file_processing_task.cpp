// file_processing_task.cpp, Freddie Cooke
// C++ File Processing Task

#include <iostream>
#include <fstream>

using namespace std;

int main() {

	// Variables
	char first_name[30], last_name[30], response; int age;
	char file_name[20];

	// Create and ofstream called People, open the stream for output.
	cout << endl << "Enter the name of the file: "; cin >> file_name;
	ofstream People(file_name);

	// Collect the data.
	while (true) {
		cout << "Enter First Name: "; cin >> first_name;
		cout << "Enter Last Name: "; cin >> last_name;
		cout << "Enter Age: "; cin >> age;

		// Write the output to  the stream.
		People << first_name << endl << last_name << endl << age;

		cout << "Have you finished? (y/n) "; cin >> response;
		if (response == 'y') { People.close(); break; }

		// Add the space after each person
		People << endl;
	}

	//Open file and print.
	ifstream File(file_name);

	while (true) {
		File >> first_name >> last_name >> age;
		cout << endl << "First Name: " << first_name;
		cout << endl << "Last Name: " << last_name;
		cout << endl << "Age: " << age;
		cout << endl;
		if (File.eof()) { break; }
	}

	// Close ifstream.
	File.close();

	return 0;
}
