#include<iostream>
using namespace std;

/*enum genre
{
	Act=1,
	Com,
	Thr,
	Mys,
	Sci
};

int main()
{
	char lang[20];
	char type[20];
	int inputgenre;

	cout << "Enter the genre" << endl;
	cin >> inputgenre;
	switch (inputgenre)
	{
	case Act:
		cout << "Chosen Genre: " << Act << endl;
		break;
	case Com:
		cout << "Chosen Genre: " << Com << endl;
		break;
	case Thr:
		cout << "Chosen Genre: " << Thr << endl;
		break;
	case Mys:
		cout << "Chosen Genre: " << Mys << endl;
		break;
	case Sci:
		cout << "Chosen Genre: " << Sci << endl;
		break;
	}
}
*/

/*int main()
{
	int v1 = 0;
	cin >> v1;
	if (v1 > 10)
		goto END;
	else
		cout << " Within limit" << endl;

END:
	if (v1 > 20)
		cout << " over limit" << endl;
	else
		cout << " exact" << endl;

	return 0;
}*/

int display();

int main()
{
BEGIN:
	//int flag = false;
	while (true)
	{
		int ret = display();
		switch (ret)
		{
		case 1:
			cout << "Add" << endl;
			break;
		case 2:
			cout << "Subtract" << endl;
			break;
		case 3:
			cout << "Multiply" << endl;
			break;
		case 0:
			cout << "Exiting the App" << endl;
			goto END;
			break;
		default:
			cout << " Wrong Choice" << endl;

		}
	}
END:
	cout << "\n Prog Ended Successfully" << endl;
	goto BEGIN;

	return 0;
}

int display()
{
	int ch;
	cout << "Press, " << endl;
	cout << "1. Add" << endl;
	cout << "2. Aub" << endl;
	cout << "3. Multi" << endl;
	cout << "0. Exit" << endl;
	cout << "Choice" << endl;
	cin >> ch;
	return ch;
}