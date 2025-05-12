//pointer holds addresses.
// pointer will point a particular datatype.
//pointer size depends on system bitness...like 32 bit (4 byte)...and 8 bytes if 64 bit.
// in 64kb computer memory there are 0-65535 address--2 bytes.
//1.wild pointer||2.Generic pointer||3.dangling pointer.

#include<iostream>

using namespace std;

int main()
{
	int a = 10;
	char ch = 'A';
	float f = 10.5;

	//void* ptr;
	int* ptr1 = nullptr;

	printf("\nAddress of a = %u and it's value = %d\n", &a, a);
	printf("\nAddress of ch = %u and it's value = %c\n", &ch, ch);
	printf("\nAddress of f = %u and it's value = %f\n", &f, f);
	printf("\nAddress of ptr1 = %u and it's value = %u\n", &ptr1, ptr1);

	a = 10;
	ptr1 = &a;

	printf("\nAddress of ptr1 = %u and it's value = %u\n", &ptr1, ptr1);
	printf("\nPtr 1 is pointing to = %u", ptr1);
	
	//CO(ptr1) => &a
	//CO(CO(ptr1)) => value of a = dereferencing the pointer
	
	printf("\n%u is having a value stored as = %d\n", ptr1, *ptr1);

	/*cout << "Address of a = " << (unsigned long int) & a << " and it's value = " << a << endl;
	cout << "Address of ch = " << (unsigned long int) & ch << " and it's value = " << ch << endl;
	cout << "Address of f = " << (unsigned long int) & f << " and it's value = " << f << endl;
	cout << "Address of ptr = " << (unsigned long int) & ptr << " and it's value = " << ptr << endl;*/

	return 0;
}