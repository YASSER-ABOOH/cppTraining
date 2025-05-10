//armstrong
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int in = n;
	int count = 0;
	int sum = 0;
	int org = n;
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	while(org>0)
	{
		int dig = org % 10;
		int x = pow(dig, count);
		sum += x;
		org/= 10;
	}
	if (in == sum)
		cout << "Armstrong";
	else
		cout << "Not Armstrong";
}