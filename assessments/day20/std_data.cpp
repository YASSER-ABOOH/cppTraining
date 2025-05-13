#include<iostream>
#include<string>

using namespace std;

void std_data(int std_id, char std_name[50], int, int, char, string, char, int, int, string, string);
{
	int std_id;
	cout << "Enter Student ID";
	cin >> std_id;

	char std_name[50];
	cout << "Enter Student Name";
	cin.getline(std_name, 50);

	int std_ph_1;
	cout << "Enter Student's Primary Phone Number";
	cin >> std_ph_1;

	int std_ph_2;
	cout << "Enter Student's Secondary Phone Number";
	cin >> std_ph_2;

	char std_add[300];
	cout << "Enter Student Address";
	cin.getline(std_add, 300);

	string std_dept;
	cout << "Enter Student Department";
	cin >> std_dept;

	char std_mail[50];
	cin.getline(std_mail, 50);

	int tenth_percent;
	cin >> tenth_percent;

	int twelth_percent;
	cin >> twelth_percent;

	string quota;
	cin >> quota;

	string category;
	cin >> category;
}