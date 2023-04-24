
/*
 Lucas Gonzalez
 4/23/23
 cis 1202-501
*/
#include<iostream>
#include<string>
#include "truck.h"
using namespace std;

//constructor
truck::truck() {
	towingCapacity = 0;
}

int truck::getTowingCapacity() {
	return towingCapacity;
}

void truck::setTowingCapacity(int x) {
	towingCapacity = x;
}

void truck::displayInfo() {
	vehicle::displayInfo();
	cout << "towingCapacity: " << towingCapacity << "\n";
}
