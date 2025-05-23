//Flight Reservation system

#include<iostream>
#include<cstring>


using namespace std;

const int MAX = 20;

class Flight {
protected:
	string flight_number;
	int tot_seats;
	int bkd_seats;
public:

	Flight(string f, int t)
	{
		flight_number = f;
		tot_seats = t;
	}
	void bookSeats(int);
	void showAvailability();
	/*void setFlightNumber(char* f)
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
	}*/
	/*void bookSeats(int b)
	{
		if (b < tot_seats - b)
			bkd_seats += b;
		else

		
	}*/
	//tot_seat-bk_seat=bkd_seat...
	


};
void Flight::bookSeats(int bk)
{
	bkd_seats = bk;
	if(bk>tot_seats-bkd_seats)
		cout<< "Booking Failed: Not enough seats." << endl;
}
void Flight::showAvailability()
{
		cout << "Flight: " << flight_number << " | " << "Seats Available: " << tot_seats-bkd_seats << endl;

}
int main()
{
	Flight f1("AI203",100);
	f1.bookSeats(30);
	f1.showAvailability();

	f1.bookSeats(80);
}