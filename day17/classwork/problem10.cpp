//octal to decimal
#include<iostream>
//#include<cmath>

using namespace std;
int con(int);

int main()
{
	int oct;
	cin >> oct;
	cout << con(oct);
}

int con(int oct)
{
	int dec = 0, base = 1;
	while (oct > 0) {
		int dig = oct % 10;
		dec += dig * base;
		base *= 8;
		oct /= 10;
	}
	return dec;//if I am returning octal as it is ..it returns zero, cuz we don't need to find the octal value...here we need to find the decimal value...and due to the conversion octal becomes zero after the ehile loop is completed
}
//if I am returning octal as it is ..it returns zero,
// cuz we don't need to find the octal value...
// here we need to find the decimal value...
// and due to the conversion octal becomes zero after the while loop is completed
