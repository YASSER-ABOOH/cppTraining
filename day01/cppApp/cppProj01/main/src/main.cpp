#include <iostream>
#include <addition.h>
#include <subtraction.h>
#include <division.h>
#include <multiply.h>

using namespace std;
int main()
{
	int val1, val2;
	int ret = 0;
	cout << "\n Enter hero strength" << endl;
	cin >> val1 >> val2;
	int support;
	cout << "\n Choose Support" << endl;
	cin >> support;

	switch (support)
	{
	case 1:
		ret = addition(val1, val2);
		cout << "\n Total Power is " << ret << endl;
		break;
	case 2:
		ret = subtraction(val1, val2);
		cout << "\n Growth Required is " << ret << endl;
		break;
	case 3:
		ret = multiply(val1, val2);
		cout << "\n Ultimate is " << ret << endl;
		break;
	case 4:
		ret = division(val1, val2);
		cout << "\n Weakness is " << ret << endl;
		break;

	}
}