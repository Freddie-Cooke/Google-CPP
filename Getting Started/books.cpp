// Books 

#include <iostream>

using namespace std;

void books(int amount) {

	int value = 1;

	for (int i = 1; i <= amount; i++) {
		value = value * i;
	}

	cout << "You can arrange this bookshelf in : " << value << " ways ";
}

int main() {

	// arrange 6 books

	books(6);

	return 0;
}
