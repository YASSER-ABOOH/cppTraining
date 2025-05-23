//Food Delivery Tip Calculator

#include<iostream>
#include<cstring>

using namespace std;

class DeliveryTip
{
protected:
	string order_id;
	float bill_amount;
	int distance;
	float tip;
public:
	DeliveryTip(string o, float b, int d)
	{
		order_id = o;
		bill_amount = b;
		distance = d;
	}
	int calculateTip();
	void printDetails();
};

int DeliveryTip::calculateTip()
{
	if (distance < 5)
		tip = 0.05 * bill_amount;
	else if (distance >= 5 && distance <= 10)
		tip = bill_amount;
	else
		tip = 0.15 * bill_amount;
	return tip;
	
}
void DeliveryTip::printDetails()
{
	//float tip = calculateTip();
	cout << "Order " << order_id << " | " << "Tip: " << calculateTip() << endl;
}

int main()
{
	DeliveryTip d1("ORD1", 500, 3);
	d1.printDetails();

	DeliveryTip d2("ORD2", 1000, 12);
	d2.printDetails();
}