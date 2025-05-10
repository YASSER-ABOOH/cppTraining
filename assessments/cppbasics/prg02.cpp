//greatest of three numbers
#include<iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int i = a;
	if (b > i)
		i = b;
	if (c > i)
		i = c;
	cout << i << " is the greatest here.";
}