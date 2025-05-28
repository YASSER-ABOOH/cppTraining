#include<iostream>

using namespace std;

class Employee {
private:
	int emp_id;
	string emp_name;
	float emp_salary;
protected:
	Employee(int id, string name, float salary)
	{
		emp_id = id;
		emp_name = name;
		emp_salary = salary;
	}
	/*void setId(int);
	int getId();
	void setName(string);
	string getName();
	void setSalary(float);
	float getSalary();*/
	void display();
};

//void Employee::setId(int id)
//{
//	emp_id = id;
//}
//int Employee::getId()
//{
//	return emp_id;
//}
//void Employee::setName(string name)
//{
//	emp_name = name;
//}
//string Employee::getName()
//{
//	return emp_name;
//}
//void Employee::setSalary(float salary)
//{
//	emp_salary = salary;
//}
//float Employee::getSalary()
//{
//	return emp_salary;
//}
void Employee::display()
{
	cout << "ID: " << emp_id << ", Name: " << emp_name << " Salary: " << emp_salary << endl;
}



class Node
{
private:
	int emp_id;
	string emp_name;
	float emp_salary;
	Node* next;
public:
	Node(int i=0, string n, float s=0.0)
	{
		emp_id = i;
		emp_name = n;
		emp_salary = s;
		next = nullptr;
	}
	int setEid(int);
	int getEid();
	string setEna(string);
	string getEna();
	float setEsa(float);
	float getEsa();
	Node* getNext();
	void setNext(Node* nn);
};

int Node::setEid(int v)
{
	emp_id = v;
	return 0;
}

int Node::getEid()
{
	return emp_id;
}

string Node::setEna(string w)
{
	emp_name = w;
	return 0;
}

string Node::getEna()
{
	return emp_name;
}

float Node::setEsa(float x)
{
	emp_salary = 0.0;
	return 0;
}
float Node::getEsa()
{
	return emp_salary;
}

void Node::setNext(Node* nn)
{
	next == nn;
}

Node* Node::getNext()
{
	return next;
}


class LinkedList
{
private:
	Node* head;
public:
	LinkedList()
	{
		head = nullptr;
	}
	int addEmp(int,string, float);
	void display();
	bool delEmp(int);
	void seaIntEmp(int);
	void seaStEmp(string);
	void updEmp(int,float);
};

int LinkedList::addEmp(int target, string end, float val)
{

}

void LinkedList::display()
{
	Node* temp = head;
	while (temp != nullptr)
	{
		cout << temp->getEid()<<temp->getEna()<<temp->getEsa();
		temp = temp->getNext();
	}
}


int main()
{

}