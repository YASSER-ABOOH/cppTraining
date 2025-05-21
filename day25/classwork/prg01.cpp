//If all the varibles and methods of a class are private,the class itself is of no use.



#include<iostream>
//#include<string>
//#include<cstring>

using namespace std;

class Student
{
public:

	void display(/*string str1*/)
	{
		//cout << "Hello World, "<<str1 << endl;
		cout << "name : " << name << endl;
	}
	void setname(string s)
	{
		//name = s;
		strcpy(name, s.c_str());
	}
protected:
	int rollno;
	char name[20];
};

int main()
{
	Student s;
	cout << sizeof(s) << endl;
	//s.name = "abc";
	//s.rollno = 1234;
	//cout << s.name <<"\t"<< s.rollno << endl;

	s.display();
	s.setname("Zeppelin");
	s.display();

}