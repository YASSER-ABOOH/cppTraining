#include<iostream>

using namespace std;
int fibo(int);
int main()
{
	int n;
	cin >> n;
	cout << fibo(n);
	
}
int fibo(int n)
{
	if (n <= 1)
	{
		return n;
	}
	else
	{
		return fibo(n - 1) + fibo(n - 2);
	}
	fibo(n-1)+fibo(n-2);
}