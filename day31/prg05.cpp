#include<iostream>

using namespace std;


class Nums
{
protected:
	int a, b;
public:
	void setNums(int a, int b)
	{
		this->a = a;
		this->b = b;
	}
};

class Multiply:public Nums
{
private:
	int prod;
public:
	void setValue()
	{
		cout << " Enter a and b" << endl;
		cin >> a >> b;
	}
	int multi()
	{
		prod = a * b;
		return prod;
	}

};

int main()
{
	Multiply m;
	m.setValue();
	cout<<m.multi();
	cout << endl;

}