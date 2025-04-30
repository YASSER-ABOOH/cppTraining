#include<iostream>

using namespace std;

int main()
{
	int chargestatus, activitystatus;
	cout << "Activity Status(1/0)" << endl;
	cin >> activitystatus;
	cout << "CODM active in the background" << endl;

	if (activitystatus == 1)
	{
		cout << "Charge Status(0-100)" << endl;
		cin >> chargestatus;
		if (chargestatus <= 20)
		{
			cout << "Charge Required" << endl;
			return 0;
		}
		
	}
}