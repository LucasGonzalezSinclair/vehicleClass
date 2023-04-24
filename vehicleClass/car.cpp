
/*
 Lucas Gonzalez
 4/23/23
 cis 1202-501
*/
#include<iostream>
#include<string>
#include "car.h"
using namespace std;

//constructor
car::car() {
	doors = 0;
}

int car::getDoors() {
	return doors;
}

void car::setDoors(int x) {
	doors = x;
}

void car::displayInfo() {
	vehicle::displayInfo();
	cout << "Doors: " << doors << "\n";
}
