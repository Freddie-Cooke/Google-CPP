// composer.h

#include <string>

class Composer {

	public:
		Composer();
		~Composer();

		// Accessors & Mutatators
		void set_first_name(string in_first_name);
		string first_name();
		void set_last_name(string in_last_name);
		string last_name();
		void set_composer_yob(int in_composer_yob);
		int composer_yob();
		void set_composer_genre(string in_composer_genre);
		string composer_genre();
		void set_ranking(int in_ranking);
		int ranking();
		void set_fact(string in_fact);
		string fact();

		// methods
		// This method increases a composer's rank by increment.
		void Promote(int increment);
		// This method decreases a composer's rank by decrement.
		void Demote(int decrement);
		// This method displays all the attributes of a composer.
		void Display();

	private:
		string first_name;
		string last_name;
		int composer_yob; // year of birth
		string composer_genre;
		string fact_;
		int ranking_;
};