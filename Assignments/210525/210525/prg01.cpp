//Q1.Digital Clock Simulation
//Problem :
//Create a class DigitalClock with members hour, minute, and second.Add a function tick() that increments the time by one second and handles overflow.

#include<iostream>

using namespace std;

class DigitalClock
{
private:
	int hour;
	int min;
	int sec;
public:
	void setHour(int);
	int getHour();
	void setMin(int);
	int getMin();
	void setSec(int);
	int getSec();
	void display();
	void tick();
};

void DigitalClock::setHour(int h)
{
	hour = h;
}
int DigitalClock::getHour()
{
	return hour;
}
void DigitalClock::setMin(int m)
{
	min = m;
}
int DigitalClock::getMin()
{
	return min;
}
void DigitalClock::setSec(int s)
{
	sec = s;
}
int DigitalClock::getSec()
{
	return sec;
}

void DigitalClock::display()
{
	cout << hour <<":" << min <<":" << sec << endl;
}

void DigitalClock::tick()
{
	do {
		display();
		int n;
		cin >> n;
		if (n == 1)
		{
			sec++;
			if (sec == 60)
			{
				sec = 0;
				min++;
				if (min == 60)
				{
					min = 0;
					hour++;
					if (hour = 24)
					{
						sec = min = hour = 0;
					}
				}
			}
		}
		else if (n == 0)
			break;
	} while (1);
}

int main()
{
	int h, m, s;
	cin >> h >> m >> s;

	DigitalClock J;
	J.setHour(h);
	J.setMin(m);
	J.setSec(s);
	J.tick();
	J.display();
}