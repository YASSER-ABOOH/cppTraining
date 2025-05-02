//print the count of smaller element right to the current element

#include<iostream>
//#define N 10
using namespace std;
void issmall(int a[], int n);
int main() {
    int n,i;//number of inputs
    cout << "Enter number of elements" << endl;
    cin >> n;

    int a[100];//constant value error
    for (i = 0; i < n; i++)
    {
        cout << "Enter array elements" << endl;
        cin >> a[i];
    }
    issmall(a, n);

    return 0;
}
/* 
int a[N];
for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }*/
void issmall(int a[], int n) 
{
    int a1[100],i,j,count=0;

    for (i = 0; i < n; i++)//check the two vaues and increment the count adn the count stores in the respective
    {
        for (j = i + 1; j < n; j++)//so it starts from the next element or else same
        {
            if (a[j] < a[i]) count++;
        }
        a1[i] = count;//for count
    }
    for (i = 0; i < n; i++)
    {
        cout << a1[i] << " ";
    }
}
/*
void isSmaller()
{
	int a[10];
	for (int i=0;i<10;i++)
}
*/
