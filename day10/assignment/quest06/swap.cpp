#include<iostream>

using namespace std;
int swap(int, int);
int main()
{
	int a, b;
	cin >> a>> b;
	cout << swap(a,b)<<endl;
}

int swap(int a, int b)
{
	a = a + b;
	a = b - a;
	b = b - a;
	return ;
}