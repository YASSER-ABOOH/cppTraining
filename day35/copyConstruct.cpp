#include<iostream>

using namespace std;

class myArray
{
	int* data;
public:
	myArray(int val)
	{
		data = new int(val);
	}
	myArray(const myArray& fObj)
	{
		cout << "Copy construct got called" << endl;
		data = new int(*fObj.data);
	}

	void setVal(int val) { *data = val; }
	int getVal() { return *data; }
	void display()
	{
		
		cout << "Address of data: " << data << "\t" << *data << endl;
	}

	myArray operator +(const myArray& fObj)
	{
		return myArray(*data + *fObj.data+100);
	}
	myArray& operator ++()
	{
		++*data;
		return *this;
	}

	myArray& operator ++(int)
	{
		int temp = *data;
		temp++;
		*data = temp;
		return *this;
	}
	~myArray()
	{
		delete data;
	}
 };

int main()
{
	myArray a1(10);
	a1.display();
	cout << endl;

	myArray a2(a1);
	a2.display();
	a2.setVal(20);
	cout << endl;


	a1.display();
	a2.display();
	cout << endl;

	//myArray a3=a1 + a2;
	myArray a3(a1 + a2);
	a3.display();
	cout << endl;

	++a3;
	a3.display();
	cout << endl;
	
	a3++;
	a3.display();
	cout << endl;


	

}