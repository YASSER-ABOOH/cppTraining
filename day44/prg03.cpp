/*3. Thread - safe Counter with Mutex
Problem : Create multiple threads that increment a shared counter 1000 times each.
Use a mutex to protect the counter from race conditions.
Objective : Demonstrate data race and how to prevent it using std::mutex.*/

#include<mutex>
#include<iostream>
#include<thread>

void increment(int times)
{
	int counter;
	std::cin >> counter;
	std::mutex m;
	for (int i = 0;i < times;++i)
	{
		std::lock_guard<std::mutex>lock(m);
		++counter;
	}
	std::cout << counter;
}
int main()
{
	std::thread t(increment, 1000);
	t.join();
	return 0;
}