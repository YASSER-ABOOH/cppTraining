//Auto-Suggestions System
#include<iostream>
#include<set>

using namespace std;

int main()
{
	set<string>dictionary = { "apple","application","banana","apply","ball"};
	string input;
	cin >> input;
	bool found = 0;
	for (const auto& word : dictionary)
	{
		if (word.find(input, 0)==0)
		{
			cout << word << endl;
			found = 1;
			
		}
		
		/*else
		{
			cout << "No word found" << endl;
			break;
		}*/
	}
	if (!found)
		cout << "No words found" << endl;
	
}