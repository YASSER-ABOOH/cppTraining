#include<iostream>

using namespace std;

int main()
{
	auto area = [](float a,float b,float r)
		{
			cout << "Square: " << a * a << endl;
			cout << "Rectangle: " << a * b << endl;
			cout << "Circle: " << r * r * (22 / 7) << endl;
			cout << "Triangle: " << a * b * 0.5 << endl;
		};
	area(1, 2, 3);
}