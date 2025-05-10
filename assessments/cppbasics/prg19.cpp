//nth term of fibonacci
#include<iostream>

using namespace std;

int main()
{
	int n,x=0;
	cin >> n;
	for (int i = 0;i <= n;i++)
	{
		x = (i - 1) + (i - 2);
	}
	cout << x;
}