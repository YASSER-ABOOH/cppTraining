//F to C
#include<iostream>

using namespace std;

int main()
{
	long float f;
	cin >> f;
	long float c = ((f - 32) * 5) / 9;
	cout << c;
}