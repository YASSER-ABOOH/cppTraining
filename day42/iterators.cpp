/*
iterators can be applied only on callable object or STL containers.

vector<int>::iterator i;----here is iterator is just a keyword.

whenever you want access/print the elements of an iterator, you have to dereference the iterator.

***Is it possible to use bidirectional iterators in vectors?
+++Yes,it is possible.

***Is there anyway to use iterators and its members without using: for, do, do-while, recursion,
increment, range-based......
+++Using next this can be achieved. 

*/

#include<iostream>
#include<vector>
#include<iterator>

using namespace std;

class Employee
{
	int id;
	string name;
public:
	Employee(int id, string name):id(id),name(name){}
	void disp()
	{
		cout << "EMP ID: " << id << "\t EMP NAME: " << name << endl;
	}
};

int main()
{
	vector<int> v = { 1,2,3 };
	vector<int>::iterator it = v.begin();

	for (;it != v.end();it++)
		cout << *it << endl;

	cout << endl;
	vector<Employee>vEmp;
	vEmp.emplace_back(101, "abc1");
	vEmp.emplace_back(102, "abc2");
	vEmp.emplace_back(103, "abc3");
	vEmp.emplace_back(104, "abc4");

	vector<Employee>::iterator itEmp;
	int i = 0;
	for (itEmp = vEmp.begin();itEmp != vEmp.end();i++, itEmp++)
	{
		cout << "Employee details are " << i + 1 << endl;
		//itEmp->disp();
		(*itEmp).disp();
		cout << endl;
	}
}
