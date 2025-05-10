//toggle the characters
#include<iostream>

using namespace std;

int main()
{
	char str[100];
	cin.getline(str, 100);
	int i = 0;
	while (str[i] != '0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = toupper(str[i]);
		else if(str[i]>=65 && str[i]<=90)
			str[i] = tolower(str[i]);
		i++;
	}
	cout << str;

}