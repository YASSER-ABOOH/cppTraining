#include<iostream>

using namespace std;

int main()
{
	int a[3] = { 10,20,30 };
	cout << a[0] << "\t" << a[1] << "\t" << a[2] << endl;
	
	int* ptr = nullptr;

	//ptr = &a[0];
/*	ptr = (a + 0);*/ 
	ptr = a;//assign ptr to the BA of the array
	cout << *ptr << endl;

	ptr = (ptr + 1);
	cout << *ptr << endl;

	//ptr++||ptr--||ptr-1||ptr+1;
	//ptr = &a[2];
	/*ptr = a + 2;
	cout << *ptr << endl;*/
}