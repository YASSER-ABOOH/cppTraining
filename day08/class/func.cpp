//Functions(day08)
#include<iostream>

using namespace std;

void display(void);
void sumInt(int v1, int v2);
int main()
{
	display();
	cout << "1.Addition" << endl;
	sumInt(10, 11);
	return 0;
}

void display()
{
	cout << "Press: " << endl;
}
void sumInt(int v1, int v2)
{
	cout << (v1 + v2) << endl;
}