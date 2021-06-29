#include <iostream>

using namespace std;

void add_twenty(double &my_double) {
	my_double += 20;
}

int main() {

	double my_double;

	cout << "Please enter a double: "; cin >> my_double;
	add_twenty(my_double);
	cout << "Double: " << my_double;

}