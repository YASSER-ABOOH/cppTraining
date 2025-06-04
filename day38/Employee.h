#pragma once
#include<iostream>

using namespace std;

class Employee {
	int id;
	string name;
public:
	Employee(int id, string name) :id(id), name(name) {}
	void setId(int id) {
		this->id = id;
	}
	int getId() {
		return id;
	}
	void setname(string name) {
		this->name = name;
	}
	string getname() {
		return name;
	}
	void display() {
		cout << id << name << endl;
	}
	bool operator==(const Employee& other)const
	{
		return id == other.id;
	}
};
void mySort()
{

}