//lcm
#include<iostream>

using namespace std;

int main()
{
	int a, b, rem;
	cin >> a >> b;
	int ib = b;
	int ia = a;
	while (b > 0)
	{

		rem = a % b;
		a = b;
		b = rem;
	}
	int d = (ia * ib) / a;
	cout << d;
}