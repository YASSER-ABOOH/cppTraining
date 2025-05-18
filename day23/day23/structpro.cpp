#include<iostream>

using namespace std;

typedef struct empDetails
{
	int emp_ID;
	string emp_Name;
}EMP;

typedef struct period
{
	int emp_ID;
	int no_of_days;
}PRD;

typedef struct salary
{
	int emp_ID;
	int basicPay;
	int varPay;
	int alloPay;
	int tax_allo;
}SAL;

void display(EMP&,SAL&);
void getEmpDetails( EMP&, SAL&, PRD& );
int totSal(SAL&);

int main()
{
	EMP e;
	SAL s;
	PRD p;

	getEmpDetails(e, s, p);

	s.tax_allo = totSal(s);

	display(e, s);

	return 0;
}
void getEmpDetails(EMP &e, SAL &s,PRD &p) 
{

	cout << "Enter your ID : " << endl;
	cin >> e.emp_ID;
	cout << "Enter your Name : " << endl;
	cin>>e.emp_Name;
	cout << "Worked Days : " << endl;
	cin >> p.no_of_days;
	cout << "Basic Pay : " << endl;
	cin >> s.basicPay;
	cout << "Enter Varaible Pay : " << endl;
	cin >> s.varPay;
	cout << "Allowance Pay : " << endl;
	cin >> s.alloPay;
	return;
}

int totSal(SAL &s)
{
	int gross_Sal = s.alloPay + s.varPay + s.basicPay;
	int tax_allo = gross_Sal - (gross_Sal * 0.30);
	return tax_allo;
}
void display(EMP &e,SAL &s)
{
	cout <<"ID : " << e.emp_ID << endl;
	cout <<"Name : " << e.emp_Name << endl;
	cout <<"Tax : " <<s.tax_allo << endl;
	return;
}

//int taxCaL(SAL s)
//{
//	int tax_allo =  gross_Sal
//}