// Random

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {

	int rand_num;

	//rand_num = rand() % 10 + 1;
	srand(time(NULL));
	rand_num = rand();
	cout << rand_num % 10 + 1;

}