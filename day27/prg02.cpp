//creat an employee CLass with add, revmove and display...add&remove(in stack)

#include<iostream>

using namespace std;

const int MAX = 10;

class Employee
{
protected:
	int emp_id;
	string emp_name;
public:
	void setId(int);
	int getId();
	void setName(string);
	string getName();
	void display();
};
void Employee::setId(int i)
{
	emp_id = i;
}
int Employee::getId()
{
	return emp_id;
}
void Employee::setName(string n)
{
	emp_name = n;
}
string Employee::getName()
{
	return emp_name;
}
void Employee::display()
{
	cout << "EMP : " << emp_id << "NAME : " << emp_name << endl;
}

class Stack
{
private:
	int top;
	Employee arr[MAX];
public:
	Stack s1() { top = -1; 
	}
	bool push(Employee& emp );
	bool pop();
	void Sdisp();
};

void Stack::Sdisp()
{
	if (top == -1)
		cout << "Stack is Empty" << endl;
		
	else
		for (int i = top;i >= 0;i--)
		{
			arr[i].display();
		}
}

bool Stack::push(Employee& emp)
{
	if (MAX - 1 == top)
	{
		cout << "Full Stack" << endl;
		return 0;
	}
	else
		top++;
	arr[top] = emp;
	return 1;
}

bool Stack::pop()
{
	if (top == -1)
	{
		cout << "Empty Stack" << endl;
		return 0;
	}
	else
		top--;
	arr[top].display();
	cout << "Employee Removed" << endl;
	return 1;
}

int main()
{
	int id;
	string name;
	cout << "Enter ID and Name" << endl;
	cin >> id >> name;

	Employee e;
	Stack s;
	e.setId(id);
	e.setName(name);
	s.push(e);
	s.pop();
	s.Sdisp();
}