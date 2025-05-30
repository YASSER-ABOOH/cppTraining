#include<iostream>
#include<fstream>
#include<string>

using namespace std;


struct Employee
{
	int id;
	char name[20];
};
int main()
{


	//create and write file
	/*ofstream fOut("ust.txt");
	fOut << "Hello World" << endl;
	int start=2;
	int end=5;
	for (int i = start;i <= 10;i++)
	{
		for (int j = 1;j <= end;j++)
		{
			fOut << j << " x " << i << " = " << i * j << endl;
		}
	}fOut << endl;*/
	
	//close file
	//fOut.close();
	
	
	//read file
	/*string line;
	ifstream fIn("ust.txt");
	while (getline(fIn, line))
		cout << line << endl;
	fIn.close();*/

	//check if file open
	/*string line;
	ifstream fIn("ust.txt");
	if (!fIn.is_open())
		cerr << "Error: Opening the file" << endl;
	while (getline(fIn, line))
		cout << line << endl;
	fIn.close();*/

	//append mode
	/*ofstream fOut("ust.txt", ios::app);
	fOut << "End of Line 93" << endl;
	fOut.close();*/

    //read and write
	/*fstream fIO;
	fIO.open("Test.txt", ios::in | ios::out);
	if (!fIO.is_open())
	{
		cerr << "Error: opening the file" << endl;
	}

	fIO << "Hello World" << endl;*/

	//
	fstream fIO;
	struct Employee e = { 320,"Amit" };

	fIO.open("Test1.txt", ios::in | ios::out );
	if (!fIO.is_open())
	{
		cerr << "Error: opening the file" << endl;
	}


	fIO.write((char*)&e, sizeof(e));
	


	fIO.seekg(ios::beg);
	cout << fIO.tellg() << endl;

	struct Employee e1;
	fIO.read((char*)&e1, sizeof(e1));


	cout << e1.id << "\t" << e1.name << endl;

	cout << fIO.tellg() << endl;
	cout << fIO.tellp() << endl;


	fIO.close();
}