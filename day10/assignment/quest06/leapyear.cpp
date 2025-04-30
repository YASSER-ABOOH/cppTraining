#include<iostream>

using namespace std;
int leap(int);
int main()
{
	int n;
	cout << "Year : " << endl;
	cin >> n;
	cout << leap(n) << endl;
}

int leap(int n)
{
	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
	{
		cout << "leap year" ;
		return n;
	
	}
	else {
		cout << "not leap year" << endl;;
		return n;
	}
}
