//count the alphabet in a given string
#include<iostream>

using namespace std;

int main()
{
	char str[1024];
	cin.getline(str, 100);
	int count[26] = { 0, };
	
	for (int i = 0;i < 26;i++)
		count[i] = 0;

	for (int i = 0;i <strlen(str);i++)
		count[str[i] - 'a']++;

	for (int i = 0;i < 26;i++)
	{
		if (count[i] > 0)
		{
			cout << char(i + 'a') << " - "<< count[i] << endl;
		}
	}
}