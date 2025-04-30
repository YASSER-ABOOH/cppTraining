#include<iostream>

using namespace std;
int zero(int);
int main()
{
	int n;
	cin >> n;
	int count = zero(n);
	cout << count;
}

int zero(int n)
{
	int dig, count0 = 0;
	while (n > 0)
	{

		dig = n % 10;
		if (dig == 0)
		{
			count0++;
			n  /= 10;
			return count0;
		}
	}
}