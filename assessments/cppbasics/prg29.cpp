//hourglass star pattern

#include<iostream>

using namespace std;
void hg(int);
int main()
{
	int n;
	cin >> n;
	hg(n);
}
void hg(int n)
{
	for (int i = n;i >= 1;i--) {

		for (int j = 0;j < n - i;j++)cout << " ";//spaces
		for (int j = 0;j < i;j++)cout << "*";//lower-left quadrant of diamond
		for (int j = 0;j < i - 1;j++)cout << "*";//lower-right quadrant of diamond
		cout << endl;
	}

	for (int i = 2;i <= n;i++) {

		for (int j = 0;j < n - i;j++)cout << " ";//spaces
		for (int j = 0;j < i;j++)cout << "*";//upper-left quadrant of diamond
		for (int j = 0;j < i - 1;j++)cout << "*";//upper-right quadrant of diamond
		cout << endl;
	}
}