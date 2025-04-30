//scan if an element is present in array and print em and checl if a given value is in an array

#include<iostream>

using namespace std;


int main()
{
	int arr[5];
	int cap = 5;
	int iv;
	int a, b, c, d, e;
	int n;

	cin >> a >> b >> c >> d >> e;
	arr[0] = a;
	arr[1] = b;
	arr[2] = c;
	arr[3] = d;
	arr[4] = e;
	
	cout << "Enter a value" << endl;
	cin >> n;

	for (iv = 0;iv < cap;iv++)
	{
		cout << "Adr : " << (unsigned long)&arr[2] << endl;

		cout << "arr[" << iv << "] : " << arr[iv] << endl;
		{
			if (n == arr[iv])
			{
				break;
				
			}
		}
	}
	if (iv == cap)
		cout << "Not present" << endl;
	else
		cout << "Present at arr[" << iv<<"]" << endl;



	/*
	if (arr[0] == n)
		cout << "Present in arr[0]" << endl;
	else if (arr[1] == n)
		cout << "Present in arr[1]" << endl;
	else if (arr[2] == n)
		cout << "Present in arr[2]" << endl;
	else if (arr[3] == n)
		cout << "Present in arr[3]" << endl;
	else if (arr[4] == n)
		cout << "Present in arr[4]" << endl;
	else
		cout << "Not Present in the array" << endl;
		
		*/
	return 0;

 

}