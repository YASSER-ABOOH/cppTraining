#include<iostream>

using namespace std;

class T {

public:
	static int val;
public:
	T()
	{
		val++;
	}
	static int getVal()
	{
		return val;
	}
	void disp()
	{
		cout << "val : " << val << endl;
	}

};
int T::val;

int main()
{
	 
}