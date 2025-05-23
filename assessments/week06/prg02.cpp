//Luggage weight Checker
#include<iostream>
#include<cstring>

using namespace std;

class Luggage
{
protected:
	string ps_name;
	int weight;
	int limit;
public:
	Luggage(string p, int w)
	{
		ps_name = p;
		weight = w;
	}
	void checkOverweight();
};

void Luggage::checkOverweight()
{
	limit = 20;
	if (weight < limit)
		cout << "Luggage within limit." << endl;
	else
		cout <<"Overweight! Exceeded by " << weight-limit <<" kg" <<endl;
}

int main()
{
	Luggage l1("Rita", 18);
	l1.checkOverweight();

	Luggage l2("Sam", 25);
	l2.checkOverweight();

}