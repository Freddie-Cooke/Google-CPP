// pointer_practice.cpp, Freddie Cooke
// practicing with pointers.

#include <iostream>

using namespace std;

int main() {

	int *intptr;
	intptr = new int;
	*intptr = 0;

	cout << *intptr << endl;
	*intptr = *intptr + 1;
	cout << *intptr;

	//

	int my_int = 45;
	int *my_pointer = &my_int;

	cout << my_int << endl;

	*my_pointer = 107;

	cout << my_int << endl;
	cout << *my_pointer << endl;

	//

	int *ptr1;
	ptr1 = new int;
	float *ptr2 = new float;

	delete ptr1;
	delete ptr2;

	return 0;
}