#include<iostream>

using namespace std;
int add(int n, int m);
int main() {
	int n, m;
	cin >> n >> m;
	cout << add(m, n) << endl;
}

int add(int n, int m) {
	int last = n % 10;
	int first = m;

	while (first >= 10) {
		first /= 10;
	}

	return (first * 10) + last;
/*int add(int n, int m)
{
	int last;
	n /= 10;
	last = n % 10;

	int first=0;
	for (int i = 0;i <= n;i++)
	{
		first = m % 10;
		n = n / 10;
		return first;
	}
	cout << (first * 10) + last << endl;*/
}