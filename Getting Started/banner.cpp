// banner.cpp, Freddie Cooke
// converts text into grahical banner

#include <iostream>
#include <string>

using namespace std;

void printE(){
	cout << "EEEEE\n"
			"E\n"
			"EEEEE\n"
			"E\n"
			"EEEEE\n\n";
}

void printF(){
	cout << "FFFFF\n"
			"F\n"
			"FFFFF\n"
			"E\n"
			"F\n\n";
}

void printR(){
	cout << "RRRR\n"
			"R   R\n"
			"RRR\n"
			"R  R\n"
			"R   R\n\n";
}

void printY(){
	cout << "Y   Y\n"
			"Y   Y\n"
			"  Y\n"
			"  Y\n"
			"  Y\n\n";
}

void printZ(){
	cout << "ZZZZZ\n"
			"   Z\n"
			"  Z\n"
			" Z\n"
			"ZZZZZ\n\n";}

int main() {

	string str = "FREEZY";
	for (int i=0; i<str.length(); i++) {
		if(str[i] == 'F') {printF();}
		if(str[i] == 'R') {printR();}
		if(str[i] == 'E') {printE();}
		if(str[i] == 'Z') {printZ();}
		if(str[i] == 'Y') {printY();}
	}

	return 0;
}
