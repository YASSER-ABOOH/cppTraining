//sum of n naturak numbers
#include<iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	int s = 0;
	for (int i = 0;i <= n;i++)
	{
		s += i;
	}
	cout << s;
}