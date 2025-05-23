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
};