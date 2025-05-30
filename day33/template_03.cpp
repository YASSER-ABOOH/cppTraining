#include<iostream>

using namespace std;

template<class T1,class T2>

class Calculator
{
private:
	T1 num1;
	T2 num2;
public:
	Calculator(T1 v1,T2 v2):num1(v1),num2(v2){}
	void add() { cout << "Addition = " << num1 + num2 << endl; }
	void sub() { cout << "Subtraction = " << num1 - num2 << endl; }
	void multi() { cout << "Multiplication = " << num1 * num2 << endl; }
	void div() { 
		if (num2 == 0)
			cout << "Inavlid" << endl;
		else
		cout << "Division = " << num1 / num2 << endl; }
};

int main()
{
	float num1, num2;
	int choice;
	cout << "Enter the numbers" << endl;
	cin >> num1;
	cin >> num2;
	cout << "Enter the operation" << endl;
	cin >> choice;
	Calculator<float, float>floatCalculator(num1, num2);
	switch (choice)
	{
	case 1:
		floatCalculator.add();
		break;
	case 2:
		floatCalculator.sub();
		break;
	case 3:
		floatCalculator.multi();
		break;
	case 4:
		floatCalculator.div();
		break;
	case 5:
		return 0;
	}
}