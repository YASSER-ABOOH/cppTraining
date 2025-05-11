//inverted pyramid
#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = n;i >= 1;i--) {

		for (int j = 0;j < n - i;j++)cout << " ";//spaces
		for (int j = 0;j < i;j++)cout << "*";//lower-left quadrant of diamond
		for (int j = 0;j < i - 1;j++)cout << "*";//lower-right quadrant of diamond
		cout << endl;
	}
}