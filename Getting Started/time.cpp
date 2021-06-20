// time.cpp, Freddie Cooke
// convert seconds

#include <iostream>

using namespace std;

void convert_time(int seconds) {
	cout << "Hours: " << (seconds/3600) << endl;
	seconds = seconds - 3600*(seconds/3600);
	cout << "Minutes: " << (seconds/60) << endl;
	seconds = seconds - 60*(seconds/60);
	cout << "Seconds: " << seconds << endl;
}

int main() {

	convert_time(3662);

	return 0;
}