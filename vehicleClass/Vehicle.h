#pragma once

/*
 Lucas Gonzalez
 4/23/23
 cis 1202-501
*/
#include<iostream>
#include<string>
using namespace std;


class vehicle {
protected:
	string manufacturer;
	int yearBuilt;

public:
	//get and set
	string getManufacturer();
	void setManufacturer(string);
	
	int getYearBuilt();
	void setyearBuilt(int);

	//constructor
	vehicle();

	void displayInfo();

};
