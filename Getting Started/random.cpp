// Random guessing

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

string compare(int guess, int rand_num) {
	if ( guess > rand_num ) {
		return "Too high!"; 
	}
	if ( guess < rand_num ) {
		return "Too low!";
	}
	return "Guessed Correctly";
}

int main() {

	int rand_num;
	int guess;

	srand(time(NULL)); // Set random seed using time.
	rand_num = rand() % 10 + 1; // Assign to rand_num with limit of 1-10

	do {

		cout << "What is your guess? ";

		if(!(cin >> guess)) {
			cin.clear();
			cin.ignore();
		}
		else{
			if (compare(guess, rand_num) != "Guessed Correctly") {
				cout << compare(guess, rand_num) << endl;
			}
			else {
				break;
			}
		}

	} while (true);

	cout << "You guessed correctly!";
	return 0;

}
