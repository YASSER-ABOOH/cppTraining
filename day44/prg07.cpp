/*7. Print FizzBuzz Using Four Threads
Problem Statement :
Given a number n, create four threads to print the numbers from 1 to n with the following rules :
One thread prints "Fizz" for multiples of 3.
One prints "Buzz" for multiples of 5.
One prints "FizzBuzz" for multiples of both 3 and 5.
One prints the number for all other values.
Constraints:
Output must be in order from 1 to n.
Objective : Understand how to divide responsibility among threads and synchronize shared progress.*/

#include<iostream>
#include<thread>
#include<mutex>
#include<string>


std::mutex m;
void fb(std::string str, int n, int turn)
{
	for (static int i = 1; i <= n;)
	{
		std::lock_guard<std::mutex> lock(m);
		if (i == n + 1)break;
		else if (turn == 3 && i % 3 == 0 && i % 5 == 0){std::cout << str << std::endl;i++;}
		else if (turn == 1 && i % 3 == 0 && i % 5 != 0){std::cout << str << std::endl;i++;}
		else if (turn == 2 && i % 5 == 0 && i % 3 != 0){std::cout << str << std::endl;i++;}
		else if (turn == 4 && i % 5 != 0 && i % 3 != 0){std::cout << i << std::endl;i++;}
	}
}

int main()
{
	std::thread t1(fb, "Fizz", 20, 1);
	std::thread t2(fb, "Buzz", 20, 2);
	std::thread t3(fb, "FizzBuzz", 20, 3);
	std::thread t4(fb, "", 20, 4);
	t1.join();
	t2.join();
	t3.join();
	t4.join();
}