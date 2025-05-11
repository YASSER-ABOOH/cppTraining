//smallest and largest in an array
#include<iostream>

using namespace std;

int main()
{
	char str[100];
	cin.getline(str, 100);
	int min = int(str[0]), max = int(str[0]);
	for (int i = 1;i < strlen(str);i++)
	{

		if (int(str[i]) < min) {
			min = int(str[i]);
		}
		if (int(str[i]) > max) {
			max = int(str[i]);
		}
	}
	cout << "min : " << char(min) << endl;
	cout << "max : " << char(max) << endl;
	
}