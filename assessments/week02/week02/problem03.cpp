/*Amstrong Number*/
#include<iostream>
using namespace std;
int main() {
	int n, in, dig = 0, rem, res = 0;
	cout << "Enter : " << endl;
	cin >> n;
	in = n;
	if (n < 0)
	{
		cout << "Invalid Number";
		
	}


	int temp = n;
	while (temp > 0) {
		dig++;
		temp /= 10;
	}
	temp = n;
	while (temp > 0) {
		rem = temp % 10;

		int num = 1;
		for (int i = 0;i < dig;i++) {
			num *= rem;
		}
		res += num;
		temp /= 10;
	}
	if (res == n) {
		cout << n << " is an Armstrong Number" << endl;
	}
	else {
		cout << n << " isn't an Armstrong Number" << endl;
	}
	return 0;
}
