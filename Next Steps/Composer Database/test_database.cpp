// test_database.cpp

#include <iostream>
#include "database.h"

using namespace std;

int main() {

	Database test_database;
	test_database.AddComposer("a", "guy", "classical", 10, "hes a fungi");
	test_database.AddComposer("another", "person", "classical", 10, "hes a fungi");
	Composer first_composer = test_database.GetComposer("guy");
	test_database.DisplayAll();

	return 0;
}