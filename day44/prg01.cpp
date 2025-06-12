/*1. Print Numbers Using Two Threads
Problem: Create two threads. One thread prints numbers from 1 to 10, 
and the other thread prints numbers from 11 to 20.
Use std::thread to demonstrate concurrent execution.
Objective: Understand basic thread creation and joining.*/

#include<iostream>
#include<thread>

void fwd()
{
	for (int i = 0;i < 11;i++)
		std::cout << i << std::endl;
}
void rwd()
{
	for (int i = 11;i < 21;i++)
		std::cout << i << std::endl;
}
int main()
{
	std::thread t1(fwd);
	t1.join();
	std::thread t2(rwd);
	t2.join();
	return 0;
}