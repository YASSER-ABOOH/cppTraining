#include<iostream>

using namespace std;

int addi(int n);
int main()
{
	int n;
	cin >> n;
	cout << addi(n);
}

int addi(int n)
{
	int sum = 0;
	/*for (int i = 0;i <= n;i++)\
	{
		sum += n;
	}
	return sum;*/

		while (n > 0) {
			sum += n % 10;
			n /= 10;
		}
		if (sum >= 10)
		{
			return addi(sum);
		}
		else
			return sum;
}