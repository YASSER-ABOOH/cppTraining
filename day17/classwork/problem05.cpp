//ben 10 diamond star pattern

#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 1;i <= n;i++) {
		for (int j = 1;j <= i ;j++)cout << "*";//upper-right quadrant

		//for (int j = 1;j <= i;j++)cout << "*";//upper-left quadrant
		for (int j = 1;j <= 2*(n - i);j++)cout << " ";//spaces
		for (int j = 1;j <= i;j++)cout << "*";//upper-left quadrant



		cout << endl;
	}
	for (int i = n - 1;i >= 1;i--) {

		for (int j = 1;j <= i;j++)cout << "*";//lower-right quadrant
		//for (int j = 1;j <= i;j++)cout << "*";//lower-left quadrant

		for (int j = 1;j <= 2*(n - i);j++)cout << " ";//spaces
		//for (int j = 1;j <= n;j++)cout << " ";//spaces

		for (int j = 1;j <= i;j++)cout << "*";//lower-left quadrant


		cout << endl;
	}
}