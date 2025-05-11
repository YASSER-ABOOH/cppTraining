//second smallest
#include<iostream>

using namespace std;

int main()
{
	char str[100];
	cin.getline(str, 100);
	int temp;
	for (int i = 0;i < strlen(str);i++)
	{
		for (int j = 0;j < strlen(str);j++)
		{
			if (str[j] < str[j + 1]) {
				temp = str[j + 1];
				str[j+1] = str[j];
				str[j] = temp;
			}
		}
	}
	cout << str[strlen(str) - 2];
}