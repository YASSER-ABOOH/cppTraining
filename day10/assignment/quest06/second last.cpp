#include<iostream>
using namespace std;

int secondL(int);
int main()
{
	int n;
	cout << "Enter : " << endl;
	cin >> n;
	cout <<secondL(n);

}
int secondL(int n)
{
	int dig;
	n /= 10;
	dig = n % 10;
	return dig;
}