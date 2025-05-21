#include<iostream>

using namespace std;

class Student
{
private:
	int stu_regNum;
	char stu_name[20];
	char stu_dept[10];
public:
	void setRegnum(int r)
	{
		stu_regNum = r;
	}
	void setName(char* n)
	{
		strcpy(stu_name, n);
	}
	char* getName()
	{
		return stu_name;
	}
	void setDept(char* d)
	{
		strcpy(stu_dept, d);
	}
	char* getDept()
	{
		return stu_dept;
	}
	void display()
	{
		cout << "Student : "<<stu_name << endl;
		cout << "Dept : " << stu_dept << endl;
		cout << "Registration Number : " << stu_regNum << endl;
	}
};

int main()
{
	int r = 1112;
	char n[100] = "Green Baby";
	char d[100] = "Green, Green Grass From Home";

	Student s1;
	s1.setName(n);
	s1.setDept(d);
	s1.display();
	
	cout << s1.getName() << endl;
	cout << s1.getDept() << endl;
	cout << (n, s1.getName()) << endl;
	cout << s1.getName() << endl;
}