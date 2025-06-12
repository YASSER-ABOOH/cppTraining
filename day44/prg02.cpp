/*2. Print Odd and Even Numbers Using Same Function
Problem : Write a program using two threads running the same function to print odd 
and even numbers from 1 to N.Use a flag to distinguish between threads.
Objective : Learn how to pass arguments to threads 
and reuse the same function logic with different behavior.*/

#include<iostream>
#include<thread>

void display(int n , int flag)
{
	
	for (int i = 0;i <= n;i++)
	{
	/*	if (flag == 0)
		{
			if (i % 2 != 0)
				std::cout << i << std::endl;
		}
		if (flag == 1)
		{
			if (i % 2 == 0)
				std::cout << i << std::endl;
		}*/
		if (i % 2 == flag)
			std::cout << i << std::endl;
	}
}
int main()
{
	int n;
	std::cin >> n;
	std::thread t1(display,n,0);
	t1.join();

	std::thread t2(display,n,1);
	t2.join();
	return 0;
}
