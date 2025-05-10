//nth term of fibonacci
#include<iostream>

using namespace std;

int main()
{
	int f;
	cin >> f;
	int n=0,m=1,p;
	for (int i = 3;i <= f;i++)
	{
		p = n + m;
		n = m;
		m = p;
	}
	cout << p;
}