//remove vowels from the string
#include<iostream>

using namespace std;

int main()
{
	char str[100] = "This is a CPP Programming Class";
	char result[100];
	int j = 0;
	{
		//cout << ch;
		//ch = tolower(ch);
		for (int i = 0; str[i] != '\0';i++)
		{
			char ch = str[i];
			if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'))
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