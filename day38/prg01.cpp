#include<iostream>
#include<list>
//#include<algorithm>
#include"Employee.h"

using namespace std;


int main()
{
	Employee e1(101, "aaa");
	Employee e2(102, "bbb");
	Employee e3(103, "ccc");
	Employee e4(104, "ddd");
	Employee e5(105, "eee");
	Employee e6(106, "fff");
	Employee e7(107, "ggg");

	list<Employee> listStuds;

	listStuds.push_front(e1);
	listStuds.push_back(e2);
	listStuds.emplace_front(e3);
	listStuds.emplace_back(e4);

	for (auto lS : listStuds)
		lS.display();
	listStuds.reverse();
	cout << "=================================" << endl;
	for (auto lS : listStuds)
		lS.display();

	listStuds.remove(e2);
	cout << "=================================" << endl;
	for (auto lS : listStuds)
		lS.display();

	cout << endl;
}