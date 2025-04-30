#include<iostream>
#include<string>
using namespace std;

int main()
{
	/*int n = 10;
	int i = 0;
	int a = 1;
	cout << i << ",";
	while (i<99)
	{
		a = a++;
		a = a++;
		i = i + a;
		cout << i <<",";
	}*/

	/*int itr1, n;
	cout << "Enter the value";
	cin >> n;
	itr1 = 1;
	while (itr1 < n) {
		cout << (itr1 * itr1) - 1 << ",";
		itr1++;
	}
	cout << (itr1 * itr1) - 1;
	return 0;*/
	
	/*int itr1, N;
	cout << "Enter the value";
	cin >> N;
	itr1 = 1;
	while (itr1 < N)
	{
		cout << itr1 << "*";
		itr1++;
	
	}
	cout << itr1;

	return 0;
	*/


/*	int itr1, itr2, n;
	cout << "Enter";
	cin >> n;

	itr1 = 1;
	int count = 1;
	while (itr1 < n)
	{
		itr2 = 0;
		while (itr2 < n)
		{
			if (count % n == 0)
				cout << count;
			else
				cout << count << "*";
			count++;
			itr2++;
		}
		cout << endl;
		itr1++;
	}*/


	/*
	while (itr1 <= (n * n))
	{
		if (itr1 % n == 0)
		
			cout << itr1 << endl;
		else
			cout << itr1 << "*";

		itr1++;
		
	}*/
	/*int n, sum = 0;
	int dig;
	cin >> n;
	for(int i=0;i<=5;i++)
	{
		dig = n % 10;
		sum = sum + dig;
		n = n / 10;

	}
	cout << sum;*/

	/*int sum = 0;
	int gross = 0;
	float bs;
	cin >> bs;
	
	sum = bs + 0.4 * bs;
	gross = sum - 0.2*bs ;
	cout << gross;
	*/

	/*float sp, pr;
	int cp = 0;
	cin >> sp;
	cin >> pr;
	cp = sp - pr;
	cout << cp;
	*/

/*float pi = 3.14;
float area;
float r;
cin >> r;
area = pi * r * r;
cout << area;
*/

/*int a, b;
cin >> a >> b;
a = a + b;
b = a - b;
a = a - b;
cout << a << " " << b << endl;
*/


/*int a, b, c, d, e;
cin >> a >> b >> c >> d >> e;
int agg;
agg = a + b + c + d + e;
cout << agg;
float val;
val = (float)agg * 100 / 500;
cout << val;
*/
/*int n;
cin >> n;

char ch = 'A';
for (int j = 1; j <= n; j++) {
	cout << ch << " ";
	ch++;
}

for (int j = 1; j < n; j++) {
	cout << ch << " ";
	ch--;
}
*/

/*int itr1, n;
cout << "Enter";
cin >> n;

itr1 = 1;
int count = 1;
while (itr1 < n)
{
	if (count % n == 0)
		cout << count;
		while (itr1 < n)
	{
		if (count % n == 0)
			cout << count;
		else
			cout << count << "\b*";
		count++;
		itr1++;
	}
	cout << endl;
	itr1++;
}*/
int i=1, n;
cout << "Enter";
cin >> n;
int count=0 ;
while (i <= n)
{
	cout << count<< "*";
}
}