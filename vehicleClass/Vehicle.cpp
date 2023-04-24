/*
 Lucas Gonzalez
 4/23/23
 cis 1202-501
*/
#include<iostream>
#include<string>
#include "Vehicle.h"

using namespace std;

vehicle::vehicle() {
	manufacturer = "N/A";
	yearBuilt = 0;
}

string vehicle::getManufacturer() {
	return  manufacturer;
}
void vehicle::setManufacturer(string x) {
	manufacturer = x;
}

int vehicle::getYearBuilt() {
	return yearBuilt;
}
void vehicle::setyearBuilt(int x) {
	yearBuilt = x;
}

void vehicle::displayInfo() {
	cout << "Vehicle information: \n" <<
		"Manufacturer: " << manufacturer << "\n" <<
		"Year built: " << yearBuilt << "\n";
}
