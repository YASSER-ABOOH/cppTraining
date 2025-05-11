//max and min w/o comparision

#include<iostream>

using namespace std;

int main() {
	int a, b, max, min;
	cin >> a >> b;
	a = abs(a);
	b = abs(b);
	max = (a + b + (a - b)) / 2;
	min = (a + b - (a - b)) / 2;
	cout << "Min : " << min << endl;
	cout << "Max : " << max << endl;
	return 0;
}