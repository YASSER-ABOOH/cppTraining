#include<iostream>
#include<string>
#include<list>


using namespace std;

void Show(list<string>&tasks) {
	for (auto& task : tasks)
	{
		cout << task << endl;
	}
}
void Remove(list<string>& tasks, string& task)
{
	tasks.remove(task);
}

int main()
{
	list<string>tasks;

	string task;
	//cout << "Enter input" << endl;
	
	while (1)
	{
		cout << "Enter input" << endl;
		string input;
		cin >> input;
		{
			if (input == "add")
			{
				cout << "Enter task" << endl;
				cin >> task;
				tasks.push_back(task);
			}
			else if (input == "urgent")
			{
				cout << "Enter task " << endl;
				cin >> task;
				tasks.push_front(task);
			}
			else if (input == "remove")
			{
				cin >> task;
				Remove(tasks, task);
			}
			else if (input == "show")
			{
				Show(tasks);
			}
			else
			{
				return 0;
			}
		}
	}
}

