#include<iostream>

using namespace std;


int main()
{
	int arr[3] = { 101,102,103 };
	/*cout << "size" << sizeof(arr) << endl;
	cout << "Adr 0"<< & arr[0] << endl;
	cout << "Adr 1"<< & arr[1] << endl;
	cout << "Adr 2" << &arr[2] << endl;
	cout << "Adr 2" << (unsigned long) & arr[2] << endl;

	printf("Adress of arr[0]=%u\n", &arr[0]);
	printf("Adress of arr[0]=%u\n", &arr[1]);
	printf("Adress of arr[0]=%u\n", &arr[2]);*/


	cout << "arr[0] : " << arr[0] << endl;
	cout << "arr[1] : " << arr[1] << endl;
	cout << "arr[2] : " << arr[2] << endl;
	cout << "arr[3] : " << arr[3] << endl; //garbage value since array is outta bound

	for(int iv=0; iv<3;iv++)//iv=> index value
		cout << "arr["<<iv<<"] : " << arr[iv] << endl;

	arr[0] = 222;
	arr[2] = arr[1] * 2;
	for (int iv = 0; iv < 3;iv++)
		cout << "arr[" << iv << "] : " << arr[iv] << endl;

	return 0;

}