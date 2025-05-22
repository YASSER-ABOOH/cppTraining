

#include<iostream>

using namespace std;

class Employee
{
private:
	int e_id;
	string e_name;
public:
	Employee()
	{
		cout << "Construct got called" << endl;
		cout << "E" << endl;
		e_id = 0;
		e_name = "";
	}
	Employee(int id, string name)
	{
		cout << "Paramterized construct got called" << endl;
		cout << "e" << endl;
		cout << endl;

		e_id = id;
		e_name = name;
	}
	void display()
	{
		cout << "disp func got called" << endl;
		cout << e_id << "\t" << e_name << endl;
		cout << endl;

	}
};

int main()
{
	Employee e;
	cout << "disp" << endl;
	e.display();
	cout << endl;

	Employee e1(101, "abc");
	cout << "e1" << endl;
	e1.display();
	cout << endl;


	Employee e2(e1);
	cout << "e2" << endl;
	e2.display();
	cout << endl;

	Employee e3 = e1;
	cout << "e3" << endl;
	e3.display();
	cout << endl;

}