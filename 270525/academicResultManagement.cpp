#include<iostream>

using namespace std;

class Student
{
protected:
	int rollNo;
	string name;
	int age;
protected:
	Student(int rollNo, string name, int age)
	{
		this->rollNo=rollNo;
		this->name = name;
		this->age = age;
	}
	void dispS()
	{
		cout << "Student Info:" << endl;
		cout << "Enter Roll No: " << rollNo << endl;
		cout << "Enter Name: " << name << endl;
		cout << "Enter Age: " << age << endl;
		cout << endl;
	}
};

class Marks :public Student
{
private:
	int mk1, mk2, mk3;
	int tot_mk;
	float avg_mk;
public:
	Marks(int rollNo, string name, int age,int mk1,int mk2,int mk3):Student(rollNo,name,age)
	{
		this->mk1 = mk1;
		this->mk2 = mk2;
		this->mk3 = mk3;
	}
	int calculate()
	{
		dispS();
		cout << "Full Result:" << endl;
		tot_mk = mk1 + mk2 + mk3;
		cout << "Total Marks: " << tot_mk << endl;

		avg_mk = tot_mk * 0.33;
		cout << "Average Marks: " << avg_mk << endl;

		return tot_mk;
	
		
	}
};

int main()
{
	Marks m(101,"Alice",20,89,76,91);
	m.calculate();

}