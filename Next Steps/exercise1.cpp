// exercise1.cpp

#include <iostream>
#include <math.h>

using namespace std;

// int  36, next is 1225, find perfect squares
// the sum of a series and a perfect square/

int main() {

	int count = 0;
	double square;
	int target;

	cout << "What is your target? "; cin >> target;

	for (int i = 1; i < target; ++i)
	{
		count += i;
		square = sqrt(count);
		if (square - int(square) == 0) {
			cout << "Perfect square: " << count << " Index: " << i << " Square: " << square << endl;
		}
	}

	return 0;
}
