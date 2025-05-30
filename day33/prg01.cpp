#include<iostream>

using namespace std;

class B
{
public:
	void printB()
	{
		cout << "Print B " << endl;
	}
	void disp()
	{
		cout << "B" << endl;
	}
	virtual void disp() { cout << "B" << endl; }
};

class D : public B
{
public:
	void PrintD()
	{
		cout << "Print D" << endl;
	}
	void disp()
	{
		cout << "D" << endl;
	}
};

int main()
{
	D d;
	d.PrintD();
	d.disp();
	cout << endl;

	B* ptr = new B;
	ptr->printB();
	ptr->disp();
	cout << endl;

	ptr = &d;
	

}