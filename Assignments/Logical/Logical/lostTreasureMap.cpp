#include<iostream>

using namespace std;


int main()
{
	int n,dig,small=9;
	cin >> n;
	while (n > 0)
	{
		dig = n % 10;
		if (dig < small) {
			small = dig;
		}
		n /= 10;
	}
	cout << small << endl;
	return 0;
}