#include<iostream>
#include<thread>
#include<mutex>
#include<queue>
#include<chrono>
#include<fstream>
#include<condition_variable>
#include<string>

class Task
{
	std::string id;
	int load;
public:
	Task(std::string id, int load)
	{
		this->id = id;
		this->load = load;
	}
	/*void getId()const
	{
		return id;
	}*/
};

class Tqueue
{
	std::queue<Task>t;
	std::mutex m;
	std::condition_variable cv;
public:
	void pushTask(Task t1)
	{
		{
			std::lock_guard<std::mutex>lock(m);
			t.push(t1);
		}
		cv.notify_one();
	}
	void popTask(Task t1)
	{
		std::lock_guard<std::mutex>lock(m);
		if (t.empty())
			return;
		t1 = t.front();
		t.pop();
		return;
	}
	void waitTask(Task t1)
	{
		while(1)
		{
			std::lock_guard<std::mutex>lock(m);
			if (t.empty())
				return;
		}
	}

};