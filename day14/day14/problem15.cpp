//palindrome
#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int rev=0;
	int t = n;
	while (t > 0)
	{
		int dig = t % 10;
		rev = rev * 10 + dig;
		t /= 10;
	}
	if (n == rev)
		cout << "Palindrome";
	else
		cout << "Not palindrome";
}