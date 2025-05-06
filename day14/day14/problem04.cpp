//ASCII
#include<iostream>

using namespace std;

int main()
{
	char ch;
	cin >> ch;
	cout << int(ch) << endl;
	//ch = tolower(ch)
	if (90 >= int(ch) && int(ch) >= 65 || 95 <= int(ch) && int(ch) <= 122)
	{
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')

		{
			cout << "Vowel" << endl;
			cout << "Alphabet" << endl;
		}
		else
			cout << "Consonant" << endl;
	}
	else
		cout << "Not Alphabet" << endl;
}