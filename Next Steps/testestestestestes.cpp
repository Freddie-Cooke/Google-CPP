#include <iostream>
#include <string>

using namespace std;

int main() {

	const int kMaxInputSize = 20;

	string a_string;
	string another_string;

	cout << "Enter something: "; getline(cin, a_string);
	cout << "Enter something else: "; cin >> another_string;
	cout << a_string << endl;
	cout << another_string << endl;

	return 0;
}