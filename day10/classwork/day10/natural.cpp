#include<iostream>

using namespace std;
int natural(int);
int main()
{
	int n;
	cin >> n;
	natural(n);
	cout << natural(n);
}
int natural(int n)
{
	int i=1,  res = 0;
	while (i <= n)
	{
		res = res + i;
		i++;
	}
	return res;
	
	natural(n);
}