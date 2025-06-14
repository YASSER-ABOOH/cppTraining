#include<iostream>

using namespace std;

//int add(int a, int b) { return a + b; }
//int sub(int a, int b) { return a - b; }
//int mul(int a, int b) { return a * b; }
//int div(int a, int b) { return a / b; }
int main()
{
	auto calc = [](int a,int b)
		{
			cout <<"Add: "<< a + b << endl;
			cout <<"Sub:"<< a - b << endl;
			cout <<"Mul: "<< a * b << endl;
			cout <<"Div: " <<a / b << endl;
		};
	calc(4, 5);
}