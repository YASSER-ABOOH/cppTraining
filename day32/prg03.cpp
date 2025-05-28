#include<iostream>

using namespace std;

class A
{
protected:
	int a;
	void dispAPrt()
	{
		cout << "A: Method of protected" << endl;
	}
public:
	A()
	{
		a = 10;
	}
	void dispAPub()
	{
		cout << "a = " << a << endl;
	}
};

class B :protected A
{
public:
	void dispBPub()
	{
		a = 20;
		dispAPrt();
		dispAPub();
	}
};
class C :public B
{
public:
	void dispCPub()
		{
		dispBPub();
		}
};

int main()
{
	C oc;
	//oc.dispCPub();
	oc.dispBPub();


}