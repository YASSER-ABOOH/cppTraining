#include<iostream>
#include "prime.h"
using namespace std;

int main()
{
	int num, count = 0;
	cin >> num;
	for (int i = 1; i <= num;i++)
	{
		for (int j = 1;j <= num;j++)
		{
			if (isPrime(i) && isPrime(j))
			{
				if (i + j == num)
				{
					cout << num << (i + j) << endl;
					count;
				}
			}
		}
	}
}