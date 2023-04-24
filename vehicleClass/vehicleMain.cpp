/*
 Lucas Gonzalez
 4/23/23
 cis 1202-501
*/
#include<iostream>
#include<string>
#include "Vehicle.h"
#include "car.h"
#include "truck.h"
using namespace std;

int main() {
	string manufacturer;
	int yearBuilt{};
	int doors{};
	int towingCapacity{};

	vehicle vehicle;
	cout << "vehicle: \n";
	cout << "enter manufacturer ";
	getline(cin, manufacturer);
	cout << "enter year built ";
	cin >> yearBuilt;
	cout << "\n";
	vehicle.setManufacturer(manufacturer);
	vehicle.setyearBuilt(yearBuilt);
	vehicle.displayInfo();

	car car;
	cout << "\ncar: \n";
	cout << "enter manufacturer ";
	cin.ignore();
	getline(cin, manufacturer);
	cout << "enter year built ";
	cin >> yearBuilt;
	cout << "enter door amount ";
	cin >> doors;
	cout << "\n";
	car.setManufacturer(manufacturer);
	car.setyearBuilt(yearBuilt);
	car.setDoors(doors);
	car.displayInfo();

	truck truck;
	cout << "\ntruck: \n";
	cout << "enter manufacturer ";
	cin.ignore();
	getline(cin, manufacturer);
	cout << "enter year built ";
	cin >> yearBuilt;
	cout << "enter towing capacity ";
	cin >> towingCapacity;
	cout << "\n";
	truck.setManufacturer(manufacturer);
	truck.setyearBuilt(yearBuilt);
	truck.setTowingCapacity(towingCapacity);
	truck.displayInfo();

	return 0;
}