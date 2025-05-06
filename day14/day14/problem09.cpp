//remove all characters except alphabets
#include<iostream>

using namespace std;

int main()
{
	char str[100];
	cin.getline(str, 100);
	char result[100];
	int j = 0;
	{
		//cout << ch;
		//ch = tolower(ch);
		for (int i = 0; str[i] != '\0';i++)
		{
			char ch = str[i];
			if (90 >= int(ch) && int(ch) >= 65 || 97 <= int(ch) && int(ch) <= 122)
			{
				result[j] = ch;
				j++;
			}
		}
	}
	result[j] = '\0';
	cout << result;
	return 0;

}