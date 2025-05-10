//given number is positive or negative
#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n > 0)
		cout << "Positive number";
	else if (n == 0)
		cout << "Neither poitive nor negative as it is zero";
	else
		cout << "Negative number";
}