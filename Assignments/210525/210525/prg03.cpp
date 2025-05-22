//Q3.Student Gradebook
//Problem :
//Create a class Student with marks in 3 subjects.Add a function calculateAverage() and getGrade() that returns 'A', 'B', or 'C' based on the average.Display details using another function.

#include<iostream>

using namespace std;

class Student {
private:
	int physics;
	int chemistry;
	int biology;
public:
	void setPhy(int);
	int getPhy();
	void setChem(int);
	int getChem();
	void setBio(int);
	int getBio();
	void display();
	float calculateAverage();
	void getGrade();
};

void Student::setPhy(int p)
{
	physics = p;
}

int Student::getPhy()
{
	return physics;
}

void Student::setChem(int c)
{
	chemistry = c;
}
int Student::getChem()
{
	return chemistry;
}
void Student::setBio(int b)
{
	biology = b;
}
int Student::getBio()
{
	return biology;
}
void Student::display()
{
	cout << physics<<"\t" << chemistry<<"\t" << biology<<"\t" << endl;
}

float Student::calculateAverage()
{
	float avg = (physics + chemistry + biology) /3.0;
	return avg;
}

void Student::getGrade()
{
	float avg;
	avg=calculateAverage();
	
	if (avg >= 90)
		cout << "Grade : A" << endl;
	else if (avg <= 60)
		cout << "Grade : C" << endl;
	else
		cout << "Grade : B" << endl;
}


int main()
{
	int p, c, b;
	cin >> p >> c >> b;
	Student s;
	s.setPhy(p);
	s.setChem(c);
	s.setBio(b);
	s.display();
	s.calculateAverage();
	s.getGrade();
	

}