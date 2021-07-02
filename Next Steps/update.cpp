// update.cpp

#include <iostream>

using namespace std;

int main() {

	//bool running = true;
	int count = 0;

	string thing = "...................";

	while (count < 1000) {
		count ++;
		cout << thing;
		if (count % 2 == 0){
			thing.replace(6,1, "/");
		}
		else {
			thing.replace(6,1, "\\" );
		}

		system("cls");
	}

	return 0;
}