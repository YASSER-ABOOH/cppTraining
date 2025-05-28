//Vehicle Rental System

#include<iostream>

using namespace std;

class Vehicle
{
protected:
	int vehicleID;
	string type;
	int ratePerKm;
private:
	Vehicle(int vehicleID, string type, int ratePerKm)
	{
		this->vehicleID = vehicleID;
		this->type = type;
		this->ratePerKm = ratePerKm;
	}
	void dispV()
	{
		cout << "Vehicle Type: " << type << endl;
		cout << "Vehicle ID: " << vehicleID << endl;
		cout << "Rate: " << ratePerKm << endl;
	}
};

class Car {

};