//string anagram

#include<iostream>

using namespace std;

int main()
{
	char str1[100];
	cin.getline(str1, 100);
	char str2[100];
	cin.getline(str2, 100);
	int count1[26] = { 0 };
	int count2[26] = { 0 };
	if (strlen(str1) != strlen(str2)) {
		cout << "Not Anagram";
		return 0;
		for (int i = 0;i < strlen(str1);i++)
		{
			count1[str1[i] - 'a']++;
			count2[str2[i] - 'a']++;
		}
		for (int i = 0;i < 26;i++)
		{

			if (count1[i] != count2[i])
			{
				cout << "Not Anagram";
				return 0;
			}
		}
	}cout << "Anagram";
	return 0;
}