//even numbers between start range and end range
#include<iostream>

using namespace std;

int main()
{
	int start = 0;
	int end = 0;
	cin >> start >> end;
	for (int i = start;i <= end; i++)
	{
		if(i % 2==0)
		cout << i<<endl;
	
	}
	return 0;
}