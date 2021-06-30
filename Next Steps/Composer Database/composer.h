// composer.h

#pragma once
#include <iostream>
#include <string>

const int kDefaultRanking = 10;

using namespace std;

class Composer {

	public:
		Composer();
		~Composer();

		// Accessors & Mutatators
		void set_first_name(string in_first_name) { first_name_ = in_first_name; }
		string first_name() { return first_name_; }

		void set_last_name(string in_last_name) { last_name_ = in_last_name; }
		string last_name() { return last_name_; }

		void set_composer_yob(int in_composer_yob) { composer_yob_ = in_composer_yob; }
		int composer_yob() { return composer_yob_; }

		void set_composer_genre(string in_composer_genre) { composer_genre_ = in_composer_genre; }
		string composer_genre() { return composer_genre_; }

		void set_ranking(int in_ranking) { ranking_ = in_ranking; }
		int ranking() { return ranking_; }

		void set_fact(string in_fact) { fact_ = in_fact; }
		string fact() { return fact_; }

		// Methods
		// This method increases a composer's rank by increment.
		void Promote(int increment);
		// This method decreases a composer's rank by decrement.
		void Demote(int decrement);
		// This method displays all the attributes of a composer.
		void Display();

	private:
		string first_name_;
		string last_name_;
		int composer_yob_; // year of birth
		string composer_genre_;
		string fact_;
		int ranking_;
};

Composer::Composer() {
	ranking_ = kDefaultRanking;
}

Composer::~Composer() {

}

void Composer::Promote(int increment) {
	this->set_ranking(this->ranking() + increment);
}

void Composer::Demote(int increment) {
	this->set_ranking(this->ranking() - increment);
}

void Composer::Display() {
	cout << endl;
	cout << "Composer: " << this->first_name() << " " << this->last_name() << endl;
}