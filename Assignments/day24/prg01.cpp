//simple employee management system

#include<iostream>

using namespace std;

const int MAX_emp = 10;

typedef struct employeeDetails
{
	int emp_id;
	char emp_name[20];
}EMP;

typedef struct employeeRole
{
	int emp_id;
	char role[20];
	char project[20];
}ROL;


void getEmpDetails(EMP&, ROL&);
int empAdd(EMP[], ROL[]);
int empRemove(EMP[], ROL[]);
void display(EMP[], ROL[]);


int main()
{
	EMP e[MAX_emp];
	ROL r[MAX_emp];
	int count = 0;
	int choice;
	cin >> choice;

	do {
		switch (choice)
		{
		case 1:
		{
			if (count < MAX_emp)
			{
				getEmpDetails(e[count], r[count]);
				count++;
			}
			else
				cout << "MAX REACHED" << endl;
			break;
		}
		case 2:
		{
			display(e, r);
			break;
		}
		case 3:
		{
			empAdd(e, r);
			break;
		}
		case 4:
		{
			empRemove(e, r);
			break;
		}
		case 5:
		{
			cout << "Exiting" << endl;
			break;
		}
		default:
		{
			cout << "Invalid choice! Try again.\n";
		}
		}
	}		while (choice != 5);
}

void getEmpDetails(EMP&e, ROL&r)
{
	cout << "Enter Employee ID" << endl;
	cin >> e.emp_id;
	cin.ignore();
	cout << "Enter Employee Name : " << endl;
	cin.getline(e.emp_name, 20);

	cout << "Enter Employee Project : " << endl;
	cin >> r.project;
	cout << "Enter Employee Role : " << endl;
	cin >> r.role;
	r.emp_id = e.emp_id;
	return;
}

void display(EMP& e, ROL& r)
{
	cout << "= ================= =" << endl;
	cout << " EMPLOYEE" << endl;
	cout << "= ================= =" << endl;
	cout << e.emp_id << endl;
	cout << e.emp_name << endl;
	cout << r.project << endl;
	cout << r.role << endl;
	cout << "= ================= =" << endl;
	return;
}