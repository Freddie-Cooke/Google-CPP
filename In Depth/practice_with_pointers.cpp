// practice_with_pointers.cpp, Freddie Cooke
// pointer practice

#include <iostream>

using namespace std;

void Unknown(int *p, int num);
void HardToFollow(int *p, int q, int num);

void Unknown(int *p, int num) {
	int *q; // new pointer q

	q = &num; // q holds memory reference of local num (3)
	*p = *q + 1; // p = 3 + 1
	num = 7; 
}

void HardToFollow(int *p, int q, int *num) {
	*p = q + *num; // p = 1 + 2
	*num = p; // num = 3
	p = &q; // p becomes memory refernce of local 1
	Unknown(num, *p); // pass 3, 1
}

int main() {

	int *q; // int pointer q
	int trouble[3]; // array of ints size 3

	trouble[0] = 1; // position 0 is 1, trouble = {0, ?, ?}
	q = &trouble[1]; // memory reference in q is the refernce of position 1
	*q = 2; // q and position 1 are equal to 2
	trouble[2] = 3; // position 2 is equal to 3, trouble = {1, 2, 3}

	HardTofollow(q, trouble[0], *q); // pass memory reference of q(2), int 1, and int 2
	// trouble[1] becomes 3
	Unknown(&trouble[0], *q);

	cout << *q << " " << trouble[0] << " " << trouble[2];

	return 0;
}
