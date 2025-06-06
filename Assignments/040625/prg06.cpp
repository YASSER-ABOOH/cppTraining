//Banned Words Filter

#include<iostream>
#include<set>
//#include<algorithm>

using namespace std;

int main()
{
	set<string>profanity = { "bad", "evil", "vulgar" };
	string input;
	string rWords;

	while (1)
	{
		cin >> rWords;
		if (profanity.find(rWords) == profanity.end())
		{
			cout << rWords << " ";
		}
	}
}