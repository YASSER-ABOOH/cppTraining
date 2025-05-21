//Q4.Simple Bank ATM Menu
//Problem :
//Create a class ATMAccount with members balance, accountHolder.Provide functions deposit(), withdraw(), and checkBalance() which modify and show balance.Simulate interaction in main().


#include<iostream>

using namespace std;

class ATMAccount
{
private:
	int balance;
	char accountHolder[20];
public:
	void setHolder(char[]);
	char* getHolder();
	void setBal(int);
	int getBal();
	void deposit(int depo);
	void withdraw(int with);
	void display();

};

void ATMAccount::setHolder(char* h)
{
	strcpy(accountHolder, h);
}
char* ATMAccount::getHolder()
{
	return accountHolder;
}
void ATMAccount::setBal(int b)
{
	balance = b;
}
int ATMAccount::getBal()
{
	return balance;
}

void ATMAccount::deposit(int depo)
{
	balance = depo + balance;
}

void ATMAccount::withdraw(int with)
{
	balance = balance-with;
}

void ATMAccount::display()
{
	cout << accountHolder << endl;
	cout << "Balance : " << balance;
}

int main()
{
	int b,depo, with;
	cin >>b>> depo >> with;
	cin.ignore();
	char h[20];
	cin.getline(h, 20);
	ATMAccount a;
	a.setHolder(h);
	a.setBal(b);
	a.deposit(depo);
	a.withdraw(with);
	a.display();


}