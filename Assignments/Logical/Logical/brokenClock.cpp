#include<iostream>

using namespace std;

int main()
{
	int hr, min;
	cin >> hr;
	while (hr > 0)
	{
		for (min = 0;min <= 60;min++)
		{
			if (min % hr == 0)
				cout << min << endl;
		}
		return 0;
	}
}