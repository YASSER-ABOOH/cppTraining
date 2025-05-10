//length of string
#include<iostream>

using namespace std;

int main()
{
	char str[100];
	cin.getline(str, 100);
	int len = 0;
	int i = 0;
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	cout << len;
}