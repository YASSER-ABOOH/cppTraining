#include<iostream>
bool isPrime(int n);

using namespace std;

int main()
{
	int n;
	cout << " Number : " << endl;
	cin >> n;
	bool ret = isPrime(n);
	if (ret == true)
		cout << n << " is Prime." << endl;
	else
		cout << n << " is Not Prime." << endl;
	return 0;
}
bool isPrime(int n)
{
	bool flag = false;
	if (n <= 1)
		return false;
	for (int i = 2; i <= n / 2;i++)
	{

		if (n % i == 0)
		{
			flag = true;
			break;
		}
		for (int j = 2;j <= n;j++)
		{
			j = n % 10;
			j = n / 10;
			if (n % j == 0)
			{
				flag = true;
				break;
			}
		}
	}
}