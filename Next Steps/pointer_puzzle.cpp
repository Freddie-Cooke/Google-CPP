// pointer_puzzle.cpp

#include <iostream>

using namespace std;

void DoIt(int &foo, int goo) {
	foo = goo + 3;	// foo is 13, 
	goo = foo + 4;	// goo is 17
	foo = goo + 3;	// foo is 20
	goo = foo;		// goo is 20
}

int main() {

	int *foo, *goo; 		// int pointer foo and goo
	foo = new int;			// foo is assigned memory space
	*foo = 1;				// value of foo is assigned 1
	goo = new int;			// goo is assigned memory
	*goo = 3;				// value of goo is assigned 3
	*foo = *goo + 3;		// value of foo is 6
	foo = goo;				// foo have the same memory as goo, foo and goo are 3;
	*goo = 5;				// foo and goo are 5;
	*foo = *goo + *foo;		// foo and goo are 10;
	DoIt(*foo, *goo); 		// pass 10 and 10; 
	cout << (*foo) << endl;	//foo is 20

	return 0;
}
