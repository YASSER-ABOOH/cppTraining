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

