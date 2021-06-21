// magic_number.cpp, Freddie Cooke
// magic number thing

#include <iostream>

using namespace std;

int main() {

	int user_num;
	int reverse_num;

	cout << "Enter a three digit number, where the first number is greater than the last."; cin >> user_num;

	reverse_num = int(user_num/100) + (user_num % 10)*100 + (int(user_num / 10) - (int(user_num/100)*10))*10;
	//cout << (int(user_num/100)) << endl;
	//cout << ((user_num % 10)*100) << endl;
	//cout << (int(user_num / 10) - (int(user_num/100)*10))*10;
	cout << reverse_num;

	return 0;
}