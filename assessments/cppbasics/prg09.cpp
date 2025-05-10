//count the vowels
#include<iostream>

using namespace std;
int main()
{
	char str[100];
	cin.getline(str, 100);
	int i = 0,vowel=0;
	while (str[i] != '\0')
	{
		str[i] = tolower(str[i]);
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||str[i] == 'o' || str[i] == 'u')
			vowel++;
		i++;
	}
	cout << vowel;
}