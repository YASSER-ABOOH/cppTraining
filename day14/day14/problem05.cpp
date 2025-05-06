//strlen without func
#include<iostream>

using namespace std;

int main()
{
	int count=0;
	int i = 0;
	char str[100] = "Hello World";
	cout << strlen(str)<<endl;
	while (str[i] != '\0') {
		count++;
		i++;
		{
			if (str[i] == '\0')
				count--;
		}
	}
	cout << count;
	return 0;

}