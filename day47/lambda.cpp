#include<iostream>

void f() { std::cout << "hello\n"; }
int main()
{
	auto greet = [](/*int a, int b*/) //what does the '=' mean in here...returning the address of the function.
		{
			std::cout << "Hi" << std::endl;
			return;// a + b;
		};
	f();

	//std::cout << greet(1, 2) << std::endl;
	greet();
}