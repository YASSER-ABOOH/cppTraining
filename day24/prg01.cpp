#include<iostream>

using namespace std;

typedef struct date{
	int day;
	int month;
	int year;
}DATE;
typedef struct address {
	int hNo;
	int pincode;
	string addline1;
	string addline2;
	string city;
	string district;
	string Country;
	int pincode;
}ADDRESS;

struct Employee {
	int id;
	string name;
	DATE dateojoin;
	ADDRESS addr;
}EMP;

int main()
{

}