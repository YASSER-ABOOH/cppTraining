//GCD of two numbers
#include<iostream>

using namespace std;
//my method where you take remainders and continuously iterate the vales
int gcd(int , int );
int main()
{
	int a, b;
	cin >> a >> b;
	cout<< gcd(a, b);
}
int gcd(int a, int b)
{
	int rem;
	while (b != 0)
	{
		rem = a % b;
		a = b;
		b = rem;
	}
	return a;
}





//explaines by sir....
/*for(int i=0;i>=2;i++)
{
if((x%i==0)&&(y%i==0))
{
int gcd=i;
}
break;
}
*/






//separate failed method
//int gcd(int, int);
/*/int main()
{
	int a, b;
	cin >> a>> b;
	cout << gcd(a, b);
}
int gcd(int a, int b)
{
	int da=, db;
	for (int i = 1;i <= a; i++)
	{
		if (a % i == 0) {
			da = i;
			i++;
		}
		for (int j = 1;i <= b; j++) {
			if (b % j == 0) {
				db = j;
				j++;
				if (da == db)
					return db;
			}
			
		}

	}
}*/