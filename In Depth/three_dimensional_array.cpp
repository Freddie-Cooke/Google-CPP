// three_dimensional_array.cpp, Freddie Cooke

#include <iostream>

using namespace std;

int main () {

	int row = 3, col = 3, dep = 3;

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			for (int k = 0; k < dep; k++) {
				cout << i + j + k << endl;
			}
		}
	}

	return 0;
}
