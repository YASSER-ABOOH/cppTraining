#include<iostream>

using namespace std;
int tri(int, int, int);
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	cout << tri(a,b,c)<<endl;
}

int tri(int a, int b, int c)
{
	if (a + b + c == 180)
		cout << "triangle";
	else
		cout << "not triangle";
	return(a + b + c);
}