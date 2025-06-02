#include<iostream>

using namespace std;

template<class T1,class T2,class T3>
class Employee
{
protected:
	T1 emp_id;
	T2 emp_name;
	T3 emp_whours;
public:
	Employee(T1 value1, T2 value2,T3 value3) :emp_id(value1), emp_name(value2),emp_whours(value3) {}
	void disp()
	{
		cout << "Id : " << emp_id << endl;
		cout << "Name : " << emp_name << endl;
		cout << "Salary : " << emp_whours * 500 << endl;
	}
};


int main()
{
	int id;
	string name;
	float sal;
	cout << "Enter Id" << endl;
	cin >> id;
	cout << "Enter Name" << endl;
	cin >> name;
	cout << "Enter Salary" << endl;
	cin>> sal;
	int id2;
	string name2;
	float sal2;
	cout << "Enter Id" << endl;
	cin >> id2;
	cout << "Enter Name" << endl;
	cin >> name2;
	cout << "Enter Salary" << endl;
	cin >> sal2;
	Employee<int, string, float> intEmployee(id, name, sal);
	Employee<int, string, float> intEmployee2(id2, name2, sal2);
	intEmployee.disp();
	intEmployee2.disp();
}


/*template<class T1, class T3>
class Finance :public Employee
{
protected:
	T1 emp_id;
	T3 emp_salary;
public:


};*/