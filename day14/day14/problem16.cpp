//armstrong
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int num;
	cin >> num;
	int initial = num;
	int rem;
	int power;
	int sum = 0;
	int count = 0;
	while (initial != 0) {
		initial /= 10;
		count++;
	}

	while (initial > 0)
	{
		rem = initial % 10;
		power=pow(rem, count);
		sum += power;
		initial = initial / 10;
	}
	if (initial == sum)
		cout << "Armstrong";
	else
		cout << "Not Armstrong";
}