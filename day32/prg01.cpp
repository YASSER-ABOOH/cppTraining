//Multiple Inheritance

#include<iostream>

using namespace std;

class A {
	int a;
public:
	A(int x) :a(x)
	{
		cout << "Construct A got called" << endl;
	}
	~A()
	{
		cout << "Destruct A got called" << endl;
	}
	void dispA()
	{
		cout << "a = " << a << endl;
	}
};
class B {
	int b;
public:
	B(int y) :b(y)
	{
		cout << "Construct B got called" << endl;
	}
	~B()
	{
		cout << "Destruct B got called" << endl;
	}
	void dispB()
	{
		cout << "b = " << b << endl;
	}

};

class C :public B, public A
{
	int c;
public:
	C(int x,int y,int z) :A(x),B(y),c(z)
	{
		cout << "Construct C got called" << endl;
	}
	~C()
	{
		cout << "Destruct C got called" << endl;
	}
	void dispC()
	{
		cout << "c = " << c << endl;
	}

};

int main()
{
	C oc(10, 20, 30);
}