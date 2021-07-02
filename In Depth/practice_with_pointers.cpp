// practice_with_pointers.cpp, Freddie Cooke
// pointer practice

#include <iostream>

using namespace std;

void Unknown(int *p, int num);
void HardToFollow(int *p, int q, int *num);

void Unknown(int *p, int num) {
	int *q; // new pointer

	q = &num; // holds reference of 1
	*p = *q + 2; // p = 3
	num = 7; // local num = 7
}

void HardToFollow(int *p, int q, int *num) {
	*p = q + *num; // p = 4
	*num = q; // num = 1
	num = p; // num = memory ref p (4)
	p = &q; // p becomes memory reference of q(4)
	Unknown(num, *p); // pass trouble[1]4, 1 
} 

int main() {

	int *q; // int pointer q
	int trouble[3]; // array of ints size 3

	trouble[0] = 1; // position 0 is 1, trouble = {0, ?, ?}
	q = &trouble[1]; // memory reference in q is the reference of position 1
	*q = 2; // q and position 1 are equal to 2 trouble = {1, 2, ?}
	trouble[2] = 3; // position 2 is equal to 3, trouble = {1, 2, 3}

	HardToFollow(q, trouble[0], &trouble[2]); // pass memory reference of q(2), int 1, and reference of 2 (3)
	// {1,3,1}
	Unknown(&trouble[0], *q); // pass reference(1), pass num 3.
	//trouble {5, 3, 1} (position 1 becomes second argument + 2)
	cout << *q << " " << trouble[0] << " " << trouble[2]; // 
	// print (3, 5, 1)
	return 0; //
} // 
// 