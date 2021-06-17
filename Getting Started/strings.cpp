// String output

#include <iostream>
#include <string>

using namespace std;

int main() {

	string str1 = "To be or not to be, that is the question";
	// assign string1
	string str2 = "only ";
	// assign string2
	string str3 = str1.substr(6, 12);
	// assign string3 to "or not to be"
	str1.insert(32, str2);
	// insert "only" after the
	str1.replace(str1.find("to be", 0), 5, "to jump");
	// replace "to be" with "to jump"
	str1.erase(9, 4);
	// erase "not "
	cout << str1 << endl;
	// text is "To be or to jump that is the only question"
	for (int i = 0; i < str3.length(); i++)
		cout << str3[i]; cout << endl;
	// print string 3 using a loop
	/* "To be or to jump that is the only question
		or not to be"
	*/
	return 0;
}
