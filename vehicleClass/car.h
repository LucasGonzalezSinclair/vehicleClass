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

class car : public vehicle {
private:
	int doors;

public:
	//constructor
	car();

	//get set
	int getDoors();
	void setDoors(int);

	void displayInfo();

};