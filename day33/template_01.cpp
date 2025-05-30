#include<iostream>

using namespace std;

template <class T>

void mySwap(T& a, T& b)
{
	T t = a;
	a = b;
	b = t;
}

template<class T1,class T2>
	float add(T1 a, T2 b)
{
		return a+b;
}

int main()
{
	int a = 10, b = 20;
	float x = 30.3, y = 55.5;

	mySwap(a, b);
	cout << "a " << a << "\tb " << b;

	cout << endl;

	mySwap(x, y);
	cout << "x " << x << "\ty " << y;

	cout << endl;

	cout << add(10, 12.2) << endl;
	cout << add(12.2, 12) << endl;
 }