//reverse the string
#include<iostream>

using namespace std;
 
int main()
{
	char str[100];
	cin.getline(str, 100);
	//cout << ch;
	int len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	for (int i = 0;i<len/2;i++)
	{
		char temp = str[i];
		str[i] = str[len - i-1];
		str[len - i-1] = temp;

	}
	cout << str;
}
