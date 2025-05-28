#include<iostream>

using namespace std;

class Vehicle
{
protected:
	bool wheel;
	bool seat;
public:
	void desc(bool wheel,bool seat)
	{
		this->wheel = wheel;
		cin >> wheel;
		this->seat = seat;
		cin >> seat;

	}
	void dispV()
	{
		cout << "Yes a Vehicle" << endl;
	}
	void dispInV()
	{
		cout << "Not a vehicle" << endl;
	}
};

class Car:public Vehicle
{
protected:
	int doors;
	int wheels;
public:
	void True()
	{
		cout << "Are there Seats" << endl;
		cin >> seat;
		cout << "Are there wheels" << endl;
		cin >> wheel;
		if (wheel == true && seat == true)
		{
			dispV();
		}
		else {
			dispInV();
		}
	}
	void desc(int doors, int wheels)
	{
		this->doors = doors;
		this->wheels = wheels;
	}
	void check()
	{
		cout << "Enter number of doors and wheels" << endl;
		cin >> doors >> wheel;
		if (doors >= 2 && doors <= 4 && wheels > 0 && wheels <=4 ) {
			cout << "Yes a Car" << endl;
		}
		else
			cout << "Not a Car" << endl;

	}
};

int main()
{
	Car c;
	c.True();
	c.check();
}