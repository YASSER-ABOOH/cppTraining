/*4. Print Characters Alternately(Ping Pong)
Problem: Create two threads.One prints "Ping" and the other prints "Pong" alternately 10 times.
Ensure the output is in the correct alternating sequence.

Objective : Understand thread synchronization using condition variables or atomic flags.*/

#include<iostream>
#include<thread>
#include<mutex>

std::mutex m;
bool flag = 1;
void pp(const std::string& word, bool isPing)
{
	for (int i = 0;i < 10;++i)
	{
		while (1)
		{
			std::lock_guard<std::mutex>lock(m);
			if (flag == isPing)
			{
				std::cout << word << " " << std::endl;
				flag = !flag;
				break;
			}
		}
	}
}
int main()
{
	std::thread t1(pp, "Ping", 1);
	std::thread t2(pp, "Pong", 0);
	t1.join();
	t2.join();
	return 0;
}