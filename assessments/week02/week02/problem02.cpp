#include<iostream>

using namespace std;

int main()
{
	int n,dig;
	cin >> n;
	int count0=0,count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0;

	while(n>0)
	{
		dig = n % 10;
		//cout << dig;
		if (dig == 0)
		{
			count0++;
		}
		else if (dig == 1)
			count1++;
		else if (dig == 2)
			count2++;
		else if (dig == 3)
			count3++;
		else if (dig == 4)
			count4++;
		else if (dig == 5)
			count5++;
		else if (dig == 6)
			count6++;
		else if (dig == 7)
			count7++;
		else if (dig == 8)
			count8++;
		else if (dig == 9)
			count9++;
		n = n / 10;
		//cout<<dig;
		//cout<<n;
	}
	cout << "0 : " << count0 <<endl;
	cout << "1 : " << count1 << endl;
	cout << "2 : " << count2 << endl;
	cout << "3 : " << count3 << endl;
	cout << "4 : " << count4 << endl;
	cout << "5 : " << count5 << endl;
	cout << "6 : " << count6 << endl;
	cout << "7 : " << count7 << endl;
	cout << "8 : " << count8 << endl;
	cout << "9 : " << count9 << endl;
	return 0;
}