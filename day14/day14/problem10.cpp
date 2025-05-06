//to remove space from a string

#include<iostream>

using namespace std;

int main()
{
	char str[100];
	cin.getline(str, 99);
	char result[100];
	int j = 0;
		//cout << ch;
		//ch = tolower(ch);
		for (int i = 0; str[i] != '\0';i++)
		{
			char ch = str[i];
			if (str[i] != ' ')
			{
				result[j] = str[i];
				j++;
			}
		}
	result[j] = '\0';
	cout << result;
	return 0;

}