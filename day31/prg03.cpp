#include<iostream>


using namespace std;

class Test {
public:
	int a;
	void display()
	{
		cout << "a = " << a << endl;
	}
	
};
int main()
{
	Test t;
	t.a= 1;
	t.display();

	Test* ptr = &t;
	t.a = 20;

	ptr->a = 30;
	ptr->display();

	int Test::* ptr1 = &Test::a;
	t.display();
	ptr->display();
	ptr->a = 40;
	t.display();
	ptr->display();

	ptr->*ptr1 = 50;
	t.display();
	ptr->display();


	Test t2;
	t2.a = 60;
	ptr =&t2;
	t2.display();
	ptr->display();
	ptr->*ptr1 = 70;
	t2.display();
	ptr->display();

}