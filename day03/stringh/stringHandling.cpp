#include<iostream>
#include"stringHandling.h"

using namespace std;

void stringHandling()
{
	char ch = 'A';
	char fName[20];
	string sName;

	cout << "ch Value" << ch<< endl;
	cout << "Enter First Name: ";
	cin >> fName;
	cout << " Enter Second Name: ";
	cin >> sName;
	cout << "\n My name is \n" << fName << "\r" <<sName<< endl;

	char Name[6] = "Abooh";
	cout << sizeof(Name) << endl;
	cout << "String len: " << strlen(Name) << endl;

	for (int i = 0;i< sizeof(Name);i++)
		cout << Name[i] << endl;


}
void enumHandling()
{
	enum Day { Mon, Tue, Wed };
	Day today = Tue;
	cout << " Value of today: " << today << endl;
}