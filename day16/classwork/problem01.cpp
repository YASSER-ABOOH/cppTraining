//highest and smallest element of an array

#include<iostream>
#define N 100
using namespace std;



void high(int arr[], int n, int &max,int &min)
{
	max = arr[0];
	min = arr[0];
	for (int i = 0;i < 5;i++)
	{
		if (arr[i] > max)
			max=arr[i];
		else if (arr[i] < min)
			min=arr[i];
	}
}
int main()
{
	int arr[5] = { 1,2,3,4,5 };
	int max, min;
	high(arr,5,max, min);
	cout << max << endl;
	cout << min;

}