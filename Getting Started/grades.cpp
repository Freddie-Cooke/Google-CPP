// grades.cpp, Freddie Cooke
// grades exercise

#include <iostream>

using namespace std;

/*
Final grades will be based on the following:
40% Assignments   15% Midterm Examination
35% Final Examination
10% Class Participation Grade 
*/

int main() {

	double midterm, final, assignment1, assignment2, assignment3, assignment4, section, result;

	cout << "Enter the score for the first assignment: "; cin >> assignment1;
	cout << "Enter the score for the second assignment: "; cin >> assignment2;
	cout << "Enter the score for the third assignment: "; cin >> assignment3;
	cout << "Enter the score for the fourth assignment: "; cin >> assignment4;
	cout << "Enter the score for the midterm: "; cin >> midterm;
	cout << "Enter the score for the final: "; cin >> final;
	cout << "Enter the score for the section: "; cin >> section;

	result = (((assignment1 + assignment2 + assignment3 + assignment4) / 4) * 0.4) + (midterm * 0.15) + (final * 0.35) + (section * 0.1);

	cout << "Your result is: " << result;

	return 0;
}
