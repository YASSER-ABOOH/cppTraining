#include<iostream>
#include "stringHandling.h"
#define MAXCAP 100
#define MAXMINT 60;
#include<ctime>
using namespace std;

typedef struct users

{
	int _id;
	int usertype;
	string userName;
}USERS;

void dispMenuNU(string);
void dispMenuAU();

int main(int argc, char*argv[])
{
	/*stringHandling();
	enumHandling();
	cout << argc << endl;
	cout << argv[0] << endl;
	cout << argv[1] << endl;
	cout << argv[2] << endl;
	cout << argv[3] << endl;
	int res=0;
	cin >> argv[1][0];
	switch (argv[1][0])
	{
	case '+':
		res = atoi(argv[2]) + atoi(argv[3]);
		cout << res << endl;
		break;
	case '-':
		res = atoi(argv[2]) - atoi(argv[3]);
		cout << res << endl;
		break;

	}
	/*for (int i = 0; i < argc;i++)
		cout << i << argv[i] << endl;*/

	/*int res = atoi(argv[1]) + atoi(argv[2]);
	cout << res << endl;
	*/
	/*int curcap, uncap = 0;
	cout << "\n Enter curcap" << endl;
	cin >> curcap;
	
	uncap = MAXCAP - curcap ;

	if(uncap == 0) 
	{
		cout << "\n Cap Full" << endl;
		return 0;
	}
	cout << "\n Storage can be used" << endl;*/



	/*int timeps, timeleft = 0;
	cout << "\n Enter time passed" << endl;
	cin >> timeps;

	timeleft = MAXMINT - timeps;

	if (timeleft > 30)
	{
		cout << "\n Get on the bus" << endl;
		return 0;
	}
	else
	{
		cout << "\n Go on a bike" << endl;
	}*/
	/*cout << "\n Storage can be used" << endl;*/


	USERS u;
	cout << "\n Id" << endl;
	cin >> u.usertype;
	cout << "\n UNAme" << endl;
	cin >> u.userName;

	if (u.usertype == 0)
	{
		dispMenuAU();
	}
	else
	{
		dispMenuNU(u.userName);
	}
	cout << "APP ended success" << endl;
	return 0;
}
void dispMenuAU()
{
	cout << "Accessible to me" << endl;
}

void dispMenuNU(string name)
{
	cout << "user: " << name << "has logged in " << endl;
	cout << "Access denied" << endl;
}