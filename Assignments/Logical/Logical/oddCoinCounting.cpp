#include<iostream>

using namespace std;

int main()
{
	int n,sum=0,i,dig;
	cin >> n;
	while (n > 0)
	{
		dig = n % 10;
		if (dig % 2 != 0) {
			sum += dig;
		}
		n /= 10;
	}
	/*for (i = 1;i <= n;i++)
	{
		if (i % 2 != 0) {
			sum += i;
		}
		i++;
	}*/
	cout << sum << endl;
	return 0;

}