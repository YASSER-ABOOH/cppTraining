//Schedule Conflict Detection
#include<iostream>
#include<set>

using namespace std;

int main()
{
	set<int>bhrs;
	string input;
	int hr;
	while (1)
	{
		cin >> input;
		cin >> hr;
		if (input == "BOOK")
		{
			if (bhrs.find(hr) == bhrs.end())
			{
				bhrs.insert(hr);
				cout << "Booked: " << hr << endl;
			}
			else
				cout << "Already Booked" << endl;
		}
		else if (input == "CHECK")
		{
			if (bhrs.find(hr) == bhrs.end())
			{
				cout << "Already Booked" << hr << endl;
			}
			else
				cout << "Free" << endl;
		}
	}
}