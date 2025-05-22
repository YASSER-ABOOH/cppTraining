//Reatil Shop output as print the bill with calculated tax, add item, edit, search.

#include<iostream>

using namespace std;

const int MAX = 10;

class Retail
{
private:
	char prd_name[20];
	int prd_id;
	int prd_price;
public: 
	void setName(char[]);
	char* getName();
	void setId(int);
	int getId();
	void setPrice(float);
	float getPrice();
	void display();
	void calculateTax();
	void search();
	void edit();
};

void Retail::setName(char* p)
{
	strcpy(prd_name, p);
}

char* Retail::getName()
{
	return prd_name;
}

void Retail::setId(int i)
{
	prd_id = i;
}
int Retail::getId()
{
	return prd_id;
}
void Retail::setPrice(float c)
{
	prd_price = c;
}
float Retail::getPrice()
{
	return prd_price;
}

void Retail::calculateTax()
{
	float tax;
	tax = prd_price * 0.33;
	prd_price = prd_price - tax;
}
void Retail::display()
{
	cout << prd_name << "\t" << prd_id << "\t" << prd_price;
}

int main()
{
	float i, c;
	char n[20];
	cout << "Enter Name" << endl;
	cin.getline(n, 20);
	cin.ignore();
	cout << "Enter ID and Cost" << endl;
	cin >> i >> c;
	Retail r;
	r.setName(n);
	r.setId(i);
	r.setPrice(c);
	r.display();
	r.calculateTax();

}