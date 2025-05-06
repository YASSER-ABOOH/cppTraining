// area of shapes
#include<iostream>
#include<cmath>

using namespace std;
double arTri(double , double );
double arSR(double , double );
double Cir(double );
int runable();


int main()
{
	/*double l, b, r;
	cout << "Enter the legnth and breadth"<<endl;
	cin >> l >> b;
	cout << "Enter Radius"<<endl;
	cin >> r;*/


	runable();
}
int runable()
{
	int choice;
	cout << "1. Triangle\n2. Square/Rectangle\n3.Circle" << endl;
	cin >> choice;

	switch (choice)
	{
	case 1:
		double bs, h;
		cout << "Enter Base and Height" << endl;
		cin >> bs >> h;
		cout << arTri(bs, h);
		break;
	case 2:
		double l, b;
		cout << "Enter length and breadth" << endl;
		cin >> l >> b;
		cout << arSR(l, b);
		break;
	case 3:
		double r;
		cout << "Enter the radius" << endl;
		cin >> r;
		cout << Cir(r);
		break;
	}
	return 0;
}

	double arTri(double bs, double h)
	{
		double area = 0.5 * bs * h;
		return area;
	}

	double arSR(double l, double b)
	{
		if (l == b)
		{
			cout << "Area of Sqaure = " << endl;
		}
		else {
			cout << "Area of Rectangle = "<<endl;
		}
		double area = l * b;
		cout << area;
		return area;
	}

	double Cir(double r)
	{
		double area=3.14 * pow(r, 2);
		cin >> r;
		cout << "Area of Circle is = " << area << endl;
		return area;
	}