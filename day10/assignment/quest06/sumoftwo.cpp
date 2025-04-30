#include<iostream>

using namespace std;
bool two(int, int);
int main()
{
	int a, b;
	cin >> a >> b;
	cout << two(a, b);
}



bool two(int a, int b)
{
	int c = a + b;
	if (c % 2 == 0)
		return true;
	else;
	return false;
}