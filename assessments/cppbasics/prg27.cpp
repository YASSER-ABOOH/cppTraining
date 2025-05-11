//diamond star pattern

#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 1;i <= n;i++) {

		for (int j = 1;j <= n - i;j++)cout << " ";//spaces
		for (int j = 1;j <= i;j++)cout << "*";//upper-left quadrant
		for (int j = 1;j <= i - 1;j++)cout << "*";//upper-right quadrant
		cout << endl;
	}
	for (int i = n - 1;i >= 1;i--) {

		for (int j = 1;j <= n - i;j++)cout << " ";//spaces
		for (int j = 1;j <= i;j++)cout << "*";//lower-left quadrant
		for (int j = 1;j <= i - 1;j++)cout << "*";//lower-right quadrant
		cout << endl;
	}
}