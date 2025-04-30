#include<iostream>
#include"prime.h"

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

