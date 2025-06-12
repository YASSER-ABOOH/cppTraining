/*
6. Odd - Even Alternating Print Using Threads
Problem Statement :
Create two threads, one to print odd numbers and one to print even numbers from 1 to 20 in order :
1 2 3 4 ... 20
Constraints :
The odd thread prints 1, 3, 5...
The even thread prints 2, 4, 6...
The output must be strictly in sequence.
Objective: Practice coordination of threads based on numeric condition and alternating turns.
*/
#include<iostream>
#include<thread>
#include<mutex>

std::mutex m;
int turn = 0;

void print(int flag)
{

	for (int i = 1;i <= 20;)
	{
		std::lock_guard<std::mutex>lock(m);

		if(turn == flag)
		{
			if (i % 2 == flag)
				std::cout << i << " ";
			turn = !turn  ;
			i++;
		}
	}
}
int main()
{
	std::thread t1(print,0);
	std::thread t2(print,1);
	t1.join();
	t2.join();

	return 0;
}