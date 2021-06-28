// accelerate.cpp

#include <iostream>

using namespace std;

void accelerate(int &speed, int amount) {

	speed += amount;
}

int main() {

	int vehicle_speed = 20;
	accelerate(vehicle_speed, 5);
	cout << vehicle_speed;

	return 0;
}