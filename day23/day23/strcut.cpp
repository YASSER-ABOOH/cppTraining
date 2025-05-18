/*
struct UDDT
{
.....
}UT;

1. Define the struct.
2. Declare the structure variable.
3. Use members of the structure.
*/

#include<iostream>

using namespace std;

typedef struct Employee
{
	int empID;
	string empName;
	string empAddress;
	int empPhno;
	char empGender;
}EMP;

int main() {
	EMP e1;
	e1.empID = 101;
	e1.empName = "Yasser";
	e1.empAddress = "Kuwait";
	e1.empGender = 'M';
	e1.empPhno = 889900;
	cout << "size of EMP : " << sizeof(EMP) << "\tsize = " << sizeof(e1) << endl;
	cout << "Name : " << e1.empName << endl;
	cout << "ID : " << e1.empID << endl;
	cout << "Gender : " << e1.empGender << endl;
	cout << "Address : " << e1.empAddress << endl;
	cout << "Ph.no. : " << e1.empPhno << endl;
	cout << endl;

	EMP e[3];

	for (int i = 0;i < 3;i++)
	{
		cout << "Name : " << e1.empName << endl;
		cout << "ID : " << e1.empID << endl;
		cout << "Gender : " << e1.empGender << endl;
		cout << "Address : " << e1.empAddress << endl;
		cout << "Ph.no. : " << e1.empPhno << endl;
	}
}