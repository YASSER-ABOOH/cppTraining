#include<iostream>

using namespace std;
int main()
{
	int a[3] = { 10,20,30 };
	int* ptr = a;

	cout << *ptr++ << endl;
	cout << *++ptr<< endl;
	cout << ++ * ptr << endl;
	ptr = a;//reassign to BA
	int *ptr

}