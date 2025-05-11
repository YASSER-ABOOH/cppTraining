//sum of elements in an array
#include<iostream>
using namespace std;

int main()
{
	int arr[10];
	for (int i = 0;i < 10;i++)
		cin >> arr[i];
	int sum = 0;
	int j = 0;
	while (arr[j] > 0)
	{
		sum += arr[j];
		j++;
	}
	cout << sum;
}