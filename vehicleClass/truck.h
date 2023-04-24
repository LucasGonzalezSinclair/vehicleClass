#pragma once
/*
 Lucas Gonzalez
 4/23/23
 cis 1202-501
*/
#include<iostream>
#include<string>
#include "Vehicle.h"
using namespace std;

class truck : public vehicle {
private:
	int towingCapacity;

public:
	//constructor
	truck();

	//get set
	int getTowingCapacity();
	void setTowingCapacity(int);

	void displayInfo();

};