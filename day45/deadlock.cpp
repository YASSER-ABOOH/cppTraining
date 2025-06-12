#include<iostream>
#include<thread>
#include<mutex>
#include<chrono>

std::mutex m1;
std::mutex m2;
void thread1()
{
	std::lock_guard<std::mutex> lock1(m1);
	std::this_thread::sleep_for(std::chrono::milliseconds(100));
	std::lock_guard<std::mutex>lock2(m2);
	std::cout << "T1 is fin";
}
void thread2()
{
	std::lock_guard<std::mutex> lock2(m2);
	std::this_thread::sleep_for(std::chrono::milliseconds(100));
	std::lock_guard<std::mutex>lock1(m1);
	std::cout << "T2 is fin";
}

int main()
{
	std::thread t1(thread1);
	std::thread t2(thread2);
	t1.join();
	t2.join();
}