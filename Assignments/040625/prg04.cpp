#include<iostream>
#include<deque>
#include<string>

using namespace std;

int main()
{
	deque<string>command;
	string input = "";
	while (input != "EXIT")
	{
		getline(cin, input);
		if (input.find("RUN") != string::npos)
		{
			command.push_back(input.substr(4));
			if (command.size() > 4)
				command.pop_front();
		}
		else if (input == "HISTORY")
		{
			for (string str1 : command)
				cout << str1 << endl;
		}
	}
}