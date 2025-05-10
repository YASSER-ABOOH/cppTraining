//remove except alphabet
#include<iostream>

using namespace std;

int main()
{
	char str[100];
	int i = 0;
	cin.getline(str, 100);
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122)
			cout << str[i];
		i++;
	}
}