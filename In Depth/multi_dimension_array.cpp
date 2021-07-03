// multi_dimension_array.cpp, Freddie Cooke
// program demonstrating multi-dimensional array

#include <iostream>

const int kStudents = 25;
const int kProblemSets = 10;

// This function return the highest grade in the Problem Set array.
int get_high_grade(int *a, int cols, int row, int col) {
	int i, j;
	int highgrade = *a; 

	for (i = 0; i < row; i++) { // track rows
		for (j = 0; j < col; j++) { // track columns
			if (*(a+ i * cols + j) > highgrade) { // if, value of (pointer + rows + columns) is greater 
				highgrade *(a + i*cols + j); // highest grade is pointer at 0 + rows and columns to traverse,
			}
		}
	}
	return highgrade;
}

using namespace std;

int main() {

	int grade[kStudents][kProblemSets] = {
		{75, 70, 85, 72, 84},
		{85, 92, 93, 96, 86},
		{95, 90, 83, 76, 97},
		{65, 62, 73, 84, 73}
	};
	int std_num = 4;
	int ps_num = 5;
	int highest;

	highest = get_high_grade((int *)grades, kProblemSets, std_num, ps_num);
	cout << "The highest problem set score in the class is " << highest << endl;

	return 0;
}
