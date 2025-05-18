#include<iostream>

using namespace std;

typedef struct carDetails
{
	int car_model_number[100];
	string car_brand[100];
}DET;

typedef struct carSpecification
{
	int car_model_number[100];
	int car_quantity[100];
	string car_category[100];
}SPEC;

typedef struct carPrice
{
	int car_model_number[100];
	int off_cost[100];
	int resell_old_car;
	int on_cost[100];
	int addon_part;
	int addon_cost[100];
	int old_car_cost[100];
}PRC;

void display(DET&, SPEC&, PRC&);
void getCarDetails(DET&, SPEC&, PRC&);
int carAdd(DET& , PRC&);
int carRe(DET&, PRC&);
int carTotalCost(PRC&);

int main()
{
	DET d;
	SPEC s;
	PRC p;

	getCarDetails(d, s, p);
	carAdd(d, p);
	carRe(d, p);
	carTotalCost(p);
	display(d, s, p);
}

void getCarDetails(DET& d, SPEC& s, PRC& p)
{
	cout << "Enter car model number" << endl;
	cin >> d.car_model_number[100];
	cout << "Enter car brand" << endl;
	cin >> d.car_brand[100];
	cout << "Enter car category" << endl;
	cin >> s.car_category[100];
	cout << "Car Stock left" << endl;
	cin >> s.car_quantity[100];
	cout << "Off road cost of car" << endl;
	cin >> p.off_cost[100];
	d.car_model_number[100] = s.car_model_number[100];
	s.car_model_number[100] = p.car_model_number[100];
	return;
}

int carAdd(DET& d, PRC& p)
{
	cout << "Enter Number of Parts to be added" << endl;
	cin >> p.addon_part;
	if (p.addon_part == 0)
		p.addon_cost[100] = 0;
	else {
		cout << "Enter Add-on Cost" << endl;
		cin >> p.addon_cost[100];
	}
	return p.addon_cost[100];
}


int carRe(DET&d,PRC&p)
{
	cout << "Enter if your selling an old car" << endl;
	cout << "Press '0' for NO \t '1' for Yes" << endl;
	cin >> p.resell_old_car;
	do
	{
		if (p.resell_old_car == 0)
			p.old_car_cost[100] = 0;
		else if (p.resell_old_car == 1)
		{
			cout << "Enter the value of old car" << endl;
			cin >> p.old_car_cost[100];
		}
		else
		{
			cout << "Invalid Input.Enter '0' or '1' only" << endl;
		}
	} while (p.resell_old_car != 0 && p.resell_old_car != 1);
	return p.old_car_cost[100];
}

int carTotalCost(PRC& p)
{
	p.on_cost[100] = p.off_cost[100] + p.addon_cost[ - p.old_car_cost;
	return p.on_cost;
}
void display(DET& d, SPEC& s, PRC& p)
{
	cout << "Car Model : " << d.car_model_number << endl;
	cout << "Car Brand : " << d.car_brand << endl;
	cout << "Car category : " << s.car_category << endl;
	cout << "Car Left in Showroom : " << s.car_quantity << endl;
	cout << "On Road Cost : " << p.on_cost << endl;
	cout << "Off road Cost : " << p.off_cost << endl;
	cout << "Number of Add-on Parts : " << p.addon_part << endl;
	cout << "Add-on Cost : " << p.addon_cost << endl;
	cout << "Cost of old car : " << p.old_car_cost << endl;
	return;
}