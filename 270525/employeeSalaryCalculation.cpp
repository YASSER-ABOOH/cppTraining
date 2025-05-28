#include<iostream>

using namespace std;

class Employee
{
protected:
	int emp_id;
	string name;
public:
	Employee(int emp_id, string name)
	{
		this->emp_id = emp_id;
		this->name = name;
	}
	
};
class Developer:public Employee
{
protected:
	int coding_hours;
public:
	Developer(int emp_id, string name,int coding_hours ):Employee(emp_id, name)
	{
		this->coding_hours = coding_hours;
	}
};

class Manager:public Employee {
protected:
	int team_size;
public:
	Manager(int emp_id, string name,int team_size):Employee(emp_id,name)
	{
		this->team_size = team_size;
	}
	void dispM()
	{
		cout << "EmpId: " << endl;
		cout << "Name: " << endl;
	}

};

class TechLead:public Manager,public Developer {
protected:
	int salary;
public:
	TechLead(int emp_id, string name, int team_size,int coding_hours,int salary) :Manager(emp_id, name,team_size), Developer(emp_id, name,coding_hours)
	{
		this->salary = salary;
	}
	int calculate()
	{
		salary = coding_hours * 500;
		dispM();
		cout << "Salary based on coding: " << salary << endl;
		cout << "Salary based on coding + team:" << salary + (team_size * 5000) << endl;
		return salary;
	}
};

int main()
{
	TechLead t(501, "Rajesh", 120, 5,500);
	t.calculate();
}