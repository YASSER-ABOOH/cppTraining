#include<iostream>

using namespace std;

class SmartPtr
{
	int* ptr;
public:
	explicit SmartPtr(int* p = NULL)
	{
		ptr = p;
	}
	
	int& operator*()
	{
		return *ptr;
	}
};
int main()
{
	SmartPtr ptr(new int());
	*ptr = 20;
	cout << *ptr;
	while (true);
	return 0;
	
}