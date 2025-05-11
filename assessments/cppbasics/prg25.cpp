//string palindrome
#include<iostream>

using namespace std;

int main()
{
	char str[100];
	cin.getline(str, 100);
	for (int i = 0;i < strlen(str) / 2;i++)
	{
		if (str[i] == str[strlen(str) - i - 1])
		{
			cout << "Palindrome";
			return 0;
		}
		else
		{
			cout << "Not Palindrome";
			break;
		}
	}
}