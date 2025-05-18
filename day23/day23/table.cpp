#include<iostream>

using namespace std;

int main()
{
	int start;
	cin >> start;
	int end;
	cin >> end;
	for (int i = start;i <= end;i++)
	{
		cout << "****************    Table " << i << "   ***************************\n";
		for (int j = 1;j <= 10;i++)
		{
			cout << i << " * " << j << " = " << i * j << endl;;
		}cout << endl;
	}
}