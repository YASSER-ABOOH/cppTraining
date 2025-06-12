/*5. Print "ABC" Using Three Threads
Problem Statement:
Create three threads to print "A", "B", and "C" respectively in strict sequence. 
The final output should be:
ABCABCABC... repeated 5 times.
Constraints:
Each thread should print only its assigned character.
Use synchronization to ensure ordering: A -> B -> C -> A ...
Objective: Understand how to use condition variables or semaphores to coordinate multiple threads cyclically.*/

#include<iostream>
#include<thread>
#include<mutex>

std::mutex m;
int turn=0;
int count=0;
void alphabet(char ch,int t)
{
	for (int i = 0;i < 5;++i)
	{
		while (1)
		{
			std::lock_guard<std::mutex>lock(m);
			if (turn %3 == t)
			{
				std::cout << ch;
				count++;
				if (count < 5*3) { std::cout << " -> "; }
				turn++;
				break;
			}
			
		}
	}
}
int main()
{
	std::thread t1(alphabet, 'A',0);
	std::thread t2(alphabet, 'B',1);
	std::thread t3(alphabet, 'C',2);
	t1.join();
	t2.join();
	t3.join();
}