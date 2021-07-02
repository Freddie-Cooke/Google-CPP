// database.h

#pragma once
#include <iostream>
#include <string>
#include <algorithm>
#include "database.h"
#include "composer.h"

const int kMaxComposers = 100;

using namespace std;

//

class Database {

	public:
		Database();
		~Database();

		Composer& AddComposer(string in_first_name, string in_last_name,
			string in_genre, int in_yob, string in_fact);

		Composer& GetComposer(string in_last_name);
		void DisplayAll();
		void DisplayByRank();

	private:
		Composer composers_[kMaxComposers];
		int next_slot_ = 0;
};

Database::Database() {
	this->AddComposer("Dan", "Theman", "Rock", 200, "God");
	//
}

Database::~Database() {

	//
}

Composer& Database::AddComposer(string in_first_name, string in_last_name, 
	string in_genre, int in_yob, string in_fact) {

	composers_[next_slot_] = Composer();

	composers_[next_slot_].set_first_name(in_first_name);
	composers_[next_slot_].set_last_name(in_last_name);
	composers_[next_slot_].set_composer_genre(in_genre);
	composers_[next_slot_].set_composer_yob(in_yob);
	composers_[next_slot_].set_fact(in_fact);

	next_slot_ ++;
	return composers_[next_slot_-1];
}

Composer& Database::GetComposer(string in_last_name) {

	for (int i = 0; i < next_slot_; i++) {
		if (composers_[i].last_name() == in_last_name) { return composers_[i]; }
	}
	cout << "Unsuccsessful" << endl;
	return composers_[0];
}

void Database::DisplayAll() {

	cout << "Composers:\n";

	for (int i = 0; i < next_slot_; ++i)
	{
		cout << i+1 << ") " << composers_[i].first_name() << " " << composers_[i].last_name() << endl;
	}
}

void Database::DisplayByRank() {

	// Bubble sort
	Composer* store;
	Composer* sorted_array[next_slot_];
	int count = 0;

	for (int i = 0; i < next_slot_-1; i++) {
		sorted_array[i] = &composers_[i];
	}

	while (count < next_slot_) {
		count++;
		for (int i = 0; i < next_slot_; i++) {
			if ((*sorted_array[i]).ranking() < (*sorted_array[i+1]).ranking()) {
				store = sorted_array[i];
				sorted_array[i] = sorted_array[i+1];
				sorted_array[i+1] = store;
			}
		}
	}

	for (int i = 0; i < next_slot_; i++) {
		cout << "Rank " << (*sorted_array[i]).ranking() << ") Name: " << (*sorted_array[i]).first_name() << " " << (*sorted_array[i]).last_name();
		cout << endl << endl;
	}

}
