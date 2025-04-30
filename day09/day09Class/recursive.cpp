#include<iostream>

using namespace std;

int fact(int n);

int main()
{
	int n, ret = fact(n);
	cin >> n;
	cout << ret << endl;
	return 0;

}

int fact(int n)
{
	int n,fact=0;
	int retValue = 1;
	if (n==0 ||n==1)
	n = fact * (n - 1);
	return 0;
}