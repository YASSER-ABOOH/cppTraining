#include<iostream>

using namespace std;

//super class
class A
{
private:
	int x;
protected:
	int y;
	void proMethod()
	{
		cout << "A:prot got called" << endl;
	}
public:
	A()
	{
		x = 10, y = 20;
		cout << "Construct A called" << endl;
	}
	void dispA()
	{
		cout << "Hello A" << endl;
		cout << "x = " << x <<"\ty = "<<y<< endl;
		cout << endl;
	}
	
};


//sub class
class B :public A
{
private:
	int a;
protected:
	int b;
public:
	B()
	{
		a = 11, b = 22;
		cout << "Construct B called" << endl;
	}
	void dispB()
	{
		cout << "Hello B" << endl;
		cout << "a = " << a << "\tb = " << b << endl;
		cout << endl;
	}
	void proA()
	{
		proMethod();
	}
};
int main()
{
	A oa;
	B ob;
	cout << endl;

	oa.dispA();
	cout << endl;

	ob.dispB();
	cout << endl;

	ob.dispA();
	cout << endl;

	ob.proA();
	cout << endl;
	
}