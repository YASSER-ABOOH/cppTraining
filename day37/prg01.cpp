//write a class for deveoping an stl container like array.
//waste code
#include<iostream>
#include<array>
#include<typeinfo>

using namespace std;

template<class T1, class T2>

class myArray 
{
private:
	T1 data1;
	T2 data2;
public:
	myArray(T1 value1,T2 value2):data1(value1),data2(value2){}
	void disp()
	{
		cout <<"myArray<" << typeid(T1).name()<<", " << data2 <<"> "<<"arr"<< endl;
	}
};
int main()
{
	myArray<float, size_t> intmyArray(10.0, 10);
	intmyArray.disp();
}