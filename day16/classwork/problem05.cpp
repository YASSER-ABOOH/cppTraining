//star pattern

#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0;i <n/2;i++)//upper
	{
		for (int j = 0;j < n / 2;j++)//upper left
		{
			cout << "*";
		}
		for (int j = 0;j < n/2;j++)//upper right
		{
			cout << "*";
		}
		cout << endl;
	}
	for (int i = 0;i < n/2;i++)//lower
	{
		for (int j = 0;j < n / 2;j++)//lower left
		{
			cout << "*";
		}
		for (int j = 0;j < n/2;j++)//lower right
		{
			cout << "*";
		}
		cout << endl;
	}
	


}