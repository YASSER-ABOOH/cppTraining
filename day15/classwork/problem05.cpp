//LCM of two

#include<iostream>

using namespace std;
int lcm(int, int);
int gcd(int, int);

int main()
{
	int a, b;
	cin >> a >> b;
	cout << lcm(a, b);
}

int gcd(int a, int b)
{
	int rem;
	while (b != 0)
	{
		rem = a % b;
		a = b;
		b = rem;
	}
	return a;
}
int lcm(int a, int b)
{
	return (a * b) / gcd(a, b);
}