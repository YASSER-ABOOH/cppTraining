#include<iostream>

using namespace std;

template<class T1,class T2>
class Box
{
private:
	T1 data1;
	T2 data2;
public :
	Box(T1 value1,T2 value2) :data1(value1),data2(value2){}
	void printData() { cout << "Data 1: " << data1 <<"\tData 2:" <<data2<< endl; }
};

int main()
{
	char arr[10] = "ab cd";
	Box<int,char*> intBox(10,arr);
//	Box<string>stringBox("abcde");

	intBox.printData();
	//stringBox.printData();

	return 0;
}