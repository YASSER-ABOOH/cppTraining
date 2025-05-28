//Vehciles

#include<iostream>

using namespace std;

class Vehicles
{
protected:
	int price;
public:
	Vehicles(int p):price(p){}
	void dispV()
	{
		cout << "Price: " << price << endl;
	}
};

class Car : public Vehicles
{
protected:
	int seating;
	int doors;
	string fuel;
public:
	Car(int p,int s,int d, string f):Vehicles(p),seating(s),doors(d),fuel(f){}
	void dispC()
	{
		cout << "Seating Capacity : " << seating << endl;
		cout << "Doors : " << doors << endl;
		cout << "Fuel : " << fuel << endl;
	}
};

class Bike:public Vehicles
{
protected:
	int cylinder;
	int gears;
	int wheels;
public:
	Bike(int p,int c,int g,int w):Vehicles(p),cylinder(c),gears(g),wheels(w){}
	void dispB()
	{
		cout << "Cylinder Count : " << cylinder << endl;
		cout << "Transmission : " << gears << endl;
		cout << "Wheels : " << endl;
	}
};

class Audi : public Car
{
protected:
	string model;
public:
	Audi(int p,int s,int d, string f,string mo):Car(p,s,d,f),model(mo){}
	void dispA()
	{
		cout << "Model : " << endl;
	}
};

class Yamaha : public Bike
{
protected:
	string make;
public:
	Yamaha(int p, int c, int g, int w, string ma) :Bike(p, c, g, w), make(ma) {}
public:
	void dispY()
	{
		cout << "Make : " << endl;
	}
};

//Audi car(price, seating capacity, number of doors, fuel type, modeltype)

int main()
{
	Audi a(90000,5,4,"Gasoline170", "S3");
	a.dispV();
	a.dispC();
	a.dispA();

	cout << "=======================" << endl;

	Yamaha y(65000, 4, 6, 2, "Alloy");
	y.dispV();
	y.dispB();
	y.dispY();

}