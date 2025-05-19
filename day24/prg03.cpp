

#include<iostream>

using namespace std;

int main()
{
	int row = 3, col = 4;

	int** arr = nullptr;

	//first step to allocate row pointer

	arr = (int**)malloc(sizeof(int*) * row);

	//for each row allocate mem for cols

	for (int i = 0;i < row;i++)
	{
		arr[i] = (int*)malloc(sizeof(int) * col);
	}

	for (int i = 0;i < row;i++)
	{
		for (int j = 0;j < col;j++) {
			cin >> arr[i][j];
			cout << arr[i][j] << "\t";
		}cout << endl;
	}
}