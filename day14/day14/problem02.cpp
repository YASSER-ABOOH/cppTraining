//compare 5 numbers
#include<iostream>

using namespace std;

int main()
{
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	int i = a;
	if (b > i)
		i = b;
	if (c > i)
		i = c;
	if (d > i)
		i = d;
	if (e > i)
		i = e;
	cout << i;
}