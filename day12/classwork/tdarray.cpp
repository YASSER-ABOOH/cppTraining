#include<iostream>
#define ROW 3
#define COL 3

using namespace std;

int main()
{
	int arr1[ROW][COL] = { {10,20,30},{40,50,60},{70,80,90} };//1st way
	int arr2[ROW][COL] = { 10,20,30,40,50,60,70,80,90 };//2nd way
	int arr3[ROW][COL];//user input

	for (int i = 0,count=1;i < ROW;i++)
	{
		for (int j = 0;j < COL;j++)//items to access items in the array
			cout<< "Array No." << count++ << " -> " <<"arr1["<<i<<"]["<<j<<"] = " << arr1[i][j] << " : Addrress = " << (long int)&arr1[i][j] << endl;
	}
	cout << "==================================================" << endl;
	for (int i = 0, count = 1;i < ROW;i++)
	{
		for (int j = 0;j < COL;j++)//items to access items in the array
			cout << "Array No." << count++ << " -> " << "arr2[" << i << "][" << j << "] = " << arr2[i][j] << " : Addrress = " << (long int)&arr2[i][j] << endl;
	}
	for (int i = 0, count = 1;i < ROW;i++)
	{
		for (int j = 0;j < COL;j++)			//items to access items in the array
		{
			cin >> arr3[i][j];
		}

	}
	for (int i = 0, count = 1;i < ROW;i++)
	{
		for (int j = 0;j < COL;j++)			//items to access items in the array
		{			cout << "Array No." << count++ << " -> " << "arr3[" << i << "][" << j << "] = " << arr3[i][j] << " : Addrress = " << (long int)&arr3[i][j] << endl;
		}
	
	}


	return 0;
}