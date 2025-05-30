#include<iostream>

using namespace std;

class Student
{
protected:
	int std_id;
	string std_name;
public:
	Student(int std_id,string std_name){}
	void dispS()
	{
		cout << "==========Student===========" << endl;
		cout << "ID : " << std_id << endl;
		cout << "Name : " << std_name << endl;

	}
};