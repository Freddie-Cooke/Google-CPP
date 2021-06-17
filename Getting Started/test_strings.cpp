// Strings test

#include <iostream>
#include <string>

using namespace std;

int main() {

	string test_string = "Hello";
	test_string.erase(3,1);
	cout << test_string;

	return 0;
}