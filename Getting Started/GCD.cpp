// Greatest Common divisor

#include <iostream>
#include <string>
using namespace std;

int GCD(int a, int b) {

	int temp = b;

	if ( b > a ) {
		temp = a;
		a = b;
		b = temp;
	}
	else{

		cout << "A: " << a << endl;
		cout << "B: " << b << endl;

		while (a-(b*(a/b)) != 0) {

			cout << a << " = " << b << " * " << (a/b) << " + " << (a-(b*(a/b))) << endl;

			//cout << "A % B: " << (a % b) << endl;

			temp = a-(b*(a/b));
			a = b; b = temp;
		}
	}
	return temp;
}

int main() {

	cout << GCD(2048, 16);

	return 0;
}
