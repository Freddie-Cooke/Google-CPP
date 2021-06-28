// vehicle_speed.cpp

#include <iostream>

using namespace std;

void Accelerate(int &speed, int amount) {
	speed += amount;
}

int main() {

	int vehicle_speed = 2;
	Accelerate(vehicle_speed, 2);
	cout << "Vehicle speed: " << vehicle_speed;

	return 0;
}