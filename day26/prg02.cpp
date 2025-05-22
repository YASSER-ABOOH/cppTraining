/*
func types: simple, static, const, inline, friend

***Whenever we are creating a class with a ststic member func.
the class decaration will be in the text segment.
the static meber func will occcupy a  space in the stack.

***static members or variables or methods, should be created in public.

***static function cannot use "this".

***if a func is defined as const func, it cannot be modified.

***

*/



#include<iostream>

using namespace std;

class Employee
{
//public:
private://protected    >(doesn't make a difference as long as they are within the class)
	int e_id;
	string e_name;
public:
	void init(int i, string n)
	{
		e_id = i;
		e_name = n;
	}
	void printDetails()
	{
		cout << e_id << "\t" << e_name << endl;

	}
};

int main()
{
	Employee e;
	//e.e_id = 777;
	//e.e_name = "Joestar";
	//Employee* ptr = &e;

	//cout << e.e_id <<"\t" << e.e_name << endl;
	//ptr->e_id=999;
	//cout << e.e_id << "\t" << e.e_name << endl;

	e.init(444, "Zeppeli");
	e.printDetails();

	return 0;
}