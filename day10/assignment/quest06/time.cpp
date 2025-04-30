#include<iostream>

using namespace std;
void time(int);
int main()
{
	int hr;
	cout << "Enter Hour : " << endl;
	cin >> hr;
	time(hr);
	//cout << time(hr)<<endl;
	return 0;
}

void time(int n)
{
	int min,sec;
	min = n * 60;
	sec = min * 60;
	cout << n << " hr" << endl;
	cout << min << " min" << endl;
	cout << sec << " sec" << endl;
}

int Mul(int mul, int count) {
	if (count == 0)
		return 0;
	return mul + Mul(mul, count - 1);
}