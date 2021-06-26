// Food

#include <iostream>
#include <string>

using namespace std;

string getMonth(char value) {
	if (value == 'a') { return "Jan"; }
	if (value == 'b') { return "Feb"; }
	if (value == 'c') { return "Mar"; }
	if (value == 'd') { return "Apr"; }
	if (value == 'e') { return "May"; }
	if (value == 'f') { return "Jun"; }
	if (value == 'g') { return "Jul"; }
	if (value == 'h') { return "Aug"; }
	if (value == 'i') { return "Sep"; }
	if (value == 'j') { return "Oct"; }
	if (value == 'k') { return "Nov"; }
	if (value == 'l') { return "Dec"; }
	return "";
}

int getDay(char value) {
	if (value == 'q') { return 0; }
	if (value == 'r') { return 1; }
	if (value == 's') { return 2; }
	if (value == 't') { return 3; }
	if (value == 'u') { return 4; }
	if (value == 'v') { return 5; }
	if (value == 'w') { return 6; }
	if (value == 'x') { return 7; }
	if (value == 'y') { return 8; }
	if (value == 'z') { return 9; }
	return 0;
}

int getYear(char value) {
	if (value == 'a') { return 1; }
	if (value == 'b') { return 2; }
	if (value == 'c') { return 3; }
	if (value == 'd') { return 4; }
	if (value == 'e') { return 5; }
	if (value == 'f') { return 6; }
	if (value == 'g') { return 7; }
	if (value == 'h') { return 8; }
	if (value == 'i') { return 9; }
	if (value == 'j') { return 10; }
	if (value == 'k') { return 11; }
	if (value == 'l') { return 12; }
	if (value == 'm') { return 13; }
	if (value == 'n') { return 14; }
	if (value == 'o') { return 15; }
	if (value == 'p') { return 16; }
	if (value == 'q') { return 17; }
	if (value == 'r') { return 18; }
	if (value == 's') { return 19; }
	if (value == 't') { return 20; }
	if (value == 'u') { return 21; }
	if (value == 'v') { return 22; }
	if (value == 'w') { return 23; }
	if (value == 'x') { return 24; }
	if (value == 'y') { return 25; }
	if (value == 'z') { return 27; }
	return 0;
}

int main() {

	string code = "arzm";
	cout << "Month: " << getMonth(code[0]) << endl;
	cout << "Day: " << getDay(code[1]) << endl;
	cout << "Year: " << getYear(code[2]) + getYear(code[3]) + 1995 << endl;

	return 0;
}
