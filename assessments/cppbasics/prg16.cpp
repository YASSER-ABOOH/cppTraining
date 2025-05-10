//prime number
#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n == 2)
		cout << "Prime";
	else if (n == 0 || n == 1)
		cout << "Neither prime nor not prime";
	else {
		for (int i = 2;i < n;i++)
		{
			if (n % i == 0)
			{
				cout << "Not prime";
				break;
			}
			else
			{
				cout << "Prime";
				break;
			}
		}
	}
}