//allocation of memory is based on the situation and needs.
//in some cases the rows and columns aren't fixed and either of them can grow dynamically.
//example HASHING...this slows the performance

#include<iostream>

using namespace std;

#define depts 3
#define noEmps 5

typedef struct Employee
{
	int id;
	char name[20];
}EMP;

int main()
{

	//EMP e[depts][noEmps]
	EMP** e = nullptr;
	
	e = (EMP**)malloc(depts * sizeof(EMP*));

	for (int i = 0;i < depts;i++)
	{
		e[i] = (EMP*)malloc(noEmps * sizeof(EMP));
		cout << "Address of e[" << i << "] = " << (unsigned long int)e << endl;



	}

}

