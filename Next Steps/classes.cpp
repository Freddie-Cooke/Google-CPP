// classes.cpp

#include <iostream>
using namespace std;

class Time {
	private:
		  int hours_;
		  int minutes_;
		  int seconds_;
	public:
		  void set(int h, int m, int s) {hours_ = h; minutes_ = m; seconds_ = s; return;}
		  void increment();
		  void decrement();
		  void display();
};

void Time::increment() {
	seconds_++;
	minutes_ += seconds_/60;
	hours_ += minutes_/60;
	seconds_ %= 60;
	minutes_ %= 60;
	hours_ %= 24;
	return;
}

void Time::decrement() {

	seconds_--;
	if (seconds_ < 0) { 
		seconds_ += 60;

		minutes_--;
		if (minutes_ < 0) {
			minutes_ += 60;

			hours_ --;
			if (hours_ < 0) {
				hours_ += 24;
			}
		}
	}
	return;
}

void Time::display() {
	cout << (hours_ % 12 ? hours_ % 12:12) << ':'
	   << (minutes_ < 10 ? "0" :"") << minutes_ << ':'
	   << (seconds_ < 10 ? "0" :"") << seconds_
	   << (hours_ < 12 ? " AM" : " PM") << endl;
}

int main() {
	Time clock;
	clock.set(23,59,58);
	for (int i = 0; i < 5; i++) {
		clock.increment();
		clock.display();
		cout << endl;
 	}
 	cout << "Decrementing" << endl;
 	for (int i = 0; i < 5; i++) {
		clock.decrement();
		clock.display();
		cout << endl;
 	}
}
