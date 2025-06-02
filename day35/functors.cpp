#include<iostream>

using namespace std;

class Add
{
	int val;
public:
	Add(int v):val(v){}

	int operator()(int x)const
	{
		return x + val;
	}
};

int main()
{
	Add a(10);
	cout << a(20);
	
}