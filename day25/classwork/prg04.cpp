#include <iostream>

using namespace std;

class Student
{
private:
	int rollno;
	char name[20];
	float marks[4];
public:
	void setName(char*);
	char* getName();
	void setRollno(int);
	int getRollno();
	void setMarks(float[]);
	void display();

private:
	float calcAvg();
	void grade();

};

//:: => scope resulotion operator
void Student::setName(char* s)
{
	strcpy(name, s);
}
char* Student::getName() {
	return name;
}

void Student::setRollno(int r) {
	rollno = r;
}
int Student::getRollno() {
	return rollno;
}
void Student::setMarks(float m[])
{
	for (int i = 0;i < 4;i++)
		marks[i] = m[i];
}

void Student::display()
{

	cout << "Name: " << name << endl;
	cout << "Roll No: " << rollno << endl;

	cout << "Avg: " << calcAvg();
	cout << endl;
}

float Student::calcAvg() {
	float avg = 0.0;
	for (int i = 0;i < 4;i++) {
		cout << marks[i] << "\t";
		avg += marks[i];
	}
	return avg / 4.0;
}
void Student::grade(float avg)
{
	if (avg > 95)
		cout << "SSS";
	else if (avg >= 90 && avg <= 95)
		cout << "S";
	else if (avg >= 80 && avg <= 89)
		cout << "A";
	else if (avg >= 70 && avg <= 79)
		cout << "B";
	else if (avg >= 60 && avg <= 69)
		cout << "C";
	else if (avg >= 450 && avg <= 59)
		cout << "D";
	else
		cout << "E";
	return;
}


int main()
{
	char n[] = "abc";
	char str2[1024] = "xyz";
	int r = 1011;
	float m[4] = { 50,55,65,75 };
	Student s1;
	s1.setRollno(r);
	s1.setName(n);
	s1.setMarks(m);
	s1.display();



	return 0;
}

