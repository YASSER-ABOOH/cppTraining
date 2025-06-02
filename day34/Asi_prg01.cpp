#include<iostream>
#include<cstring>
#include<fstream>


using namespace std;

const int MAX = 5;

class Employee
{
protected:
	int id;
	char name[10];
public:
	Employee()
	{
		id = 12;
		name = "Abooh";
	}
	void setDet(int id, string name)
	{
		this->id = id;
		this->name = name;
	}
	void dispE()
	{
		cout << "ID : " << id << endl;
		cout<<"Name : "
	}
};
