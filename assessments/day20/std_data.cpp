#include<iostream>
#include<string>

using namespace std;

void std_data(int std_id, char std_name[50], int std_ph_1, int std_ph_2, char std_add[300], char std_dept[10], char std_mail[50], int tenth_percent, int twelfth_percent, char quota[10], char category[10])
{
	cout << "Enter Student ID" << endl;
	cin >> std_id;

	cout << "Enter Student Name" << endl;
	cin.getline(std_name, 50);

	cout << "Enter Student's Primary Phone Number" << endl;
	cin >> std_ph_1;

	cout << "Enter Student's Secondary Phone Number" << endl;
	cin >> std_ph_2;

	cout << "Enter Student Address" << endl;
	cin.getline(std_add, 300);

	cout << "Enter Student Department" << endl;
	cin.getline(std_dept, 10);

	cout << "Enter Student Mail ID" << endl;
	cin.getline(std_mail, 50);

	cout << "Enter 10th percentage" << endl;
	cin >> tenth_percent;

	cout << "Enter 12th percentage" << endl;
	cin >> twelfth_percent;

	cout << "Enter Quota" << endl;
	cin.getline(quota, 10);

	cout << "Enter Category" << endl;
	cin.getline(category, 10);

	cout << std_id << "\t" << std_name << "\t" << std_ph_1 << "\t" << std_ph_2 << "\t" << std_add << "\t" << std_dept << "\t" << std_mail << "\t" << tenth_percent << "\t" << twelfth_percent << "\t" << quota << "\t" << category;


}