//remove duplicate element from an array
#include<iostream>

using namespace std;

int main()
{
	int arr[] = { 1,2,1,3,4 };
	int n = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0;i < n;i++)
	{
		for (int j = i+1;j < n;j++)
		{
			if (arr[i] == arr[j]) {
				for (int k = j;k < n-1 ;k++)
				{
					arr[k] = arr[k + 1];//shift left

				}
				n--;
			
				j--;
				
			//reduce size if present
				//arr[j] << arr[j + 1];
			//cout << arr[j];
			}
			
		}
	}
	for (int i = 0;i < n;i++)
	{
		cout << arr[i] << " ";
	}
}