// Input error recovery

#include <iostream>
using namespace std;

int main() {

	int my_var;

	cout << "Enter: ";

	if(!(cin >> my_var)) {
		//cin.clear();
		//cin.ignore();
	}

	/////////////

	int x;

	cout << "Enter: ";

	cin >> x;

	cout << x;

	return 0;
}