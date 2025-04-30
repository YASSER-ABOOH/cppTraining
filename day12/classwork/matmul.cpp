#include<iostream>
using namespace std;
#define ROW 10
#define COL 10

int main()
{
	int arr1[ROW][COL];

	int i, j,count,k,sum;
	for (i = 0, count = 1;i < ROW;i++)
	{
		for (j = 0;j < COL;j++)
		{
			cin >> arr1[i][j];
		}

	}
	int arr2[ROW][COL];
	for ( i = 0, count = 1;i < R2;i++)
	{
		for ( j = 0;j < C2;j++)
		{
			cin >> arr2[i][j];
		}

	}
	for (i = 0;i < R1;i++)
	{
		for (j = 0;j < C2;j++)
		{
			for (k = 0, sum = 0;k < C1;k++)
				sum += arr1[i][k] + arr2[k][j];
				mul[i][j] = sum;

		}
	}
	for (i = 0;i < R1;i++)
	{

	}

}