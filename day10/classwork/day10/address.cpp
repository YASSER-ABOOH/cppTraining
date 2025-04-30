//n to 1
#include<iostream>

using namespace std;

void down(int);
int main()
{
	int n;
	cout << "Enter no : " << endl;
	cin >> n;

	down(n);
	
}
void down(int n)
{
	while (n <= 0)
	{
		
		return;
	}
	cout << n;
	down(n-1);
}