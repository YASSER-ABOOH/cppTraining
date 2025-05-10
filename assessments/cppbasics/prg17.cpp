//palindrome
#include<iostream>

using namespace std;

int main()
{
	int n,r=0;
	cin >> n;
	int in=n;
	while (n > 0)
	{
		int dig = n % 10;
		r = r * 10 + dig;
		n /= 10;
	}
	if (in == r) {
		cout << "Palindrome";
	}
	else {
		cout << "Not palindrome";
	}

}