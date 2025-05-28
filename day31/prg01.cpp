#include<iostream>

using namespace std;


class Test
{
	int x;
	int y;
public:
	Test(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	Test & setX(int val)
	{
		x = val;
		return *this;
	}
	Test& setY(int val)
	{
		y = val;
		return *this;
	}
	void display()
	{
		cout << "X = " << x << "\tY = " << y << endl;
	}

};

int main()
{
	Test T(1, 11);
	T.display();


	T.setX(2);
	T.setY(12);
	T.display();

	Test& E = T.setX(3);
	E.setY(13);
	T.display();

	///they have the same address as Test.

}