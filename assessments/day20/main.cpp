//student managenment system

#include<iostream>
#include<string>
#include<cstring>

using namespace std;


int main()
{

	cout << "STUDENT ADMISSION SYSTEM" << endl;
	cout << "========================" << endl;
	//declaration
	int std_id;
	char na[10];
	char std_name[20];
	int std_ph_1;
	int std_ph_2;
	char add[10];//unnecessary
	char std_add[300];
	char std_dept[10];
	char std_mail[50];
	float tenth_percent;
	float twelfth_percent;
	char q[1];
	char quota[5];
	char w[1];
	char category[5];
	
	//data input
	cout << "Enter Student ID" << endl;
	cin >> std_id;

	cin.getline(na, 10);

	cout << "Enter Student Name" << endl;
	cin.getline(std_name, 10);

	cout << "Enter Student's Primary Phone Number" << endl;
	cin >> std_ph_1;

	cout << "Enter Student's Secondary Phone Number"<<endl;
	cin >> std_ph_2;

	cin.getline(add, 10);

	cout << "Enter Student Address"<<endl;
	cin.getline(std_add, 300);

	cout << "Enter Student Department"<<endl;
	cin.getline(std_dept, 10);

	cout << "Enter Student Mail ID" << endl;
	cin.getline(std_mail, 50);

	cout << "Enter 10th percentage" << endl;
	cin >> tenth_percent;

	cout << "Enter 12th percentage" << endl;
	cin >> twelfth_percent;

	cin.getline(q, 1);

	cout << "Enter Quota" << endl;
	cin.getline(quota,5);

	//cin.getline(w, 1);

	cout << "Enter Category" << endl;
	cin.getline(category,5);

	cout << std_id << "\t" << std_name << "\t" << std_ph_1 << "\t" << std_ph_2 << "\t" << std_add << "\t" << std_dept << "\t" << std_mail << "\t" << tenth_percent << "\t" << twelfth_percent << "\t" << quota << "\t" << category;
	

	//cut off calaculator
	int physics, chemistry, maths;
	cout << "Enter Physics Mark"<<endl;
	cin >> physics;
	cout << "Enter Chemistry Mark"<<endl;
	cin >> chemistry;
	cout << "Enter Maths Mark"<<endl;
	cin >> maths;
	int cut_off = (physics / 100) + (chemistry / 100) + (maths / 100) / 3;
	if ((cut_off >= 100) && (cut_off < 120)) {
		cout << "Eligible for the department ECE";
	}
	else if ((cut_off >= 120) && (cut_off < 130)) {
		cout << "Eligible for the department CSE";
	}
	else if ((cut_off >= 130) && (cut_off < 140)) {
		cout << "Eligible for the department EEE";
	}
	else {
		cout << "Not Eligible";
	}
	return 0;









	//view list
	/*int n;
	cin >> n;
	switch (n)
	{
	case 1:
		cout <<
	}*/
}