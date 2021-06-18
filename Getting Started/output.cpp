// Output

#include <iostream>

using namespace std;

int a = 18;
int b = 6;

int function1(int a, int b) {
	return a - b;
}

int function2() {
	int c;
	c = a + b;
	return c;
}

int main() {

	int b = 12;
	int c = 0;
	a = function1(b, a);
	// local a is assigned -6
	c = function2();
	// c is assigned global a - global b = 24
	// doesnt matter because we are printing local c
	cout << "a: " << a << " b: " << b << " c: " << c << endl;
	//a: -6		b: 12 	c: 0
	return 0;
}
