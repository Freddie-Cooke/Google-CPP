// shot_game.cpp, Freddie Cooke
// Decomposition practice

#include <iostream>
#include <random>
#include <time.h>
#include <math.h>

using namespace std;

void welcome_message() {

	cout << 	"Welcome to Artillery.\n",
				"You are in the middle of a war and being charged by thousands of enemies.\n",
				"You only have 10 cannonballs for this target...\n",
				"Let's begin...\n";
}

void enemy_distance_message(int enemy_distance) {
	cout << "The enemy is " << enemy_distance << " feet away!!!\n";
}

int get_distance_from_angle() {

	double velocity = 200.0;
	double gravity = 32.2;
	double angle;

	cout << "What angle? "; cin >> angle;

	double time_in_air = (2.0 * velocity * sin(angle)) / gravity;
	double distance = round((velocity * cos(angle)) * time_in_air);

	return distance;
}

char go_again() {
	char answer;
	cout << "I see another one, are you ready? (Y/N) "; cin >> answer;
	return answer;
}

int main() {

	srand(time(NULL));

	double enemy_distance = rand() % 500 + 10;
	double shot_distance;
	int shots_taken = 0;
	int enemy_killed = 0;
	char ready_answer = 'y';

	enemy_distance_message(enemy_distance);

	while (ready_answer == 'y') {
		double enemy_distance = rand() % 500 + 10;
		while (true) {
			shot_distance = get_distance_from_angle();
			shots_taken ++;
			if (shot_distance <= enemy_distance + 10 && shot_distance >= enemy_distance - 10) {
				enemy_killed++;
				cout << "You have killed " << enemy_killed << " of the enemy." << endl;
				ready_answer = go_again();
				break;
			}
			else {
				if (shot_distance > enemy_distance) {
					cout << "You over shot by " << shot_distance - enemy_distance << endl;
				}
				else {
					cout << "You under shot by " << enemy_distance - shot_distance << endl;
				}
			}
		}
	}

	return 0;
}
