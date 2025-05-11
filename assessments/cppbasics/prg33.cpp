//triangle pyramid star pattern

#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0;i < n;i++) {

		for (int j = 1;j <= n - i;j++)cout << " ";//spaces
		for (int j = 1;j <= i + 1;j++)cout << "* ";//left quadrant
		for (int j = (i - 1);j < i - 1;j++)cout << "*";//right quadrant
		cout << endl;
	}
}