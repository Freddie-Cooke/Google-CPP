// crickets.cpp, Freddie Cooke
// crickets exercise

#include <iostream>

using namespace std;

//	crickets chirp in proprtion to the temperature
/*	we get the tempertature by taking chirps per minute
	add 40
	divide by 4
*/

int main() {

	int chirps_per_minute;
	int temperature;

	cout << "Enter chirps per minute: "; cin >> chirps_per_minute;
	cout << "The current temperature is: " << ((chirps_per_minute + 40) / 4);

	return 0;
}
