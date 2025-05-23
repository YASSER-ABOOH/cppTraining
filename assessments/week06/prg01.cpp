//Flight Reservation system

#include<iostream>
#include<cstring>


using namespace std;

const int MAX = 20;

class Flight {
protected:
	char flight_number[MAX];
	int tot_seats;
	int bkd_seats;
public:

	void setFlightNumber(char* f)
	{
		strcpy(flight_number, f);
	}
	char* getFlightNumber()
	{
		return flight_number;
	}
	void setTotSeats(int t)
	{
		tot_seats = t;
	}
	int getTotSeats()
	{
		return tot_seats;
	}
	void setBookedSeats(int b)
	{
		bkd_seats = b;
	}
	int getBookedSeats()
	{
		return bkd_seats;
	}
	//tot_seat-bk_seat=bkd_seat...
	void showAvailability()
	{
		
	}

	void display()
	{
		cout << "Flight: " << flight_number << " | " << "Seats Available: " << tot_seats - bkd_seats << endl;
	}

};
int main()
{
	Flight f1;
	f1.display();
}