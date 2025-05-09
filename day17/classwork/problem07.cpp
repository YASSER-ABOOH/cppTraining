#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int sumst(string);

int main()
{
	char str[100];
	cin.getline(str, 100);
	cout << sumst(str);
	//int sum = 0;
	//for (char ch : str)
	//	if (isdigit(ch))
	//		sum += ch - '0';
	//return sum;
	//cout << sum;
}
int sumst(string str)
{
	int sum = 0;
	for (char ch : str)
		if (isdigit(ch))
			sum += ch - '0';
	return sum;
}