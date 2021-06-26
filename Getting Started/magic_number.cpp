// magic_number.cpp, Freddie Cooke
// magic number thing

#include <iostream>

using namespace std;

int reverse(int num) {
	return (int(num/100) + (num % 10)*100 + (int(num / 10) - (int(num/100)*10))*10);
}

int main() {

	int user_num;
	int reverse_num;
	int temp; 

	cout << "Enter a three digit number, where the first number is greater than the last: "; cin >> user_num;

	reverse_num = reverse(user_num);
	temp = user_num - reverse_num;
	reverse_num = reverse(temp);
	temp += reverse_num;

	cout << temp;

	return 0;
}
