//leader
#include<iostream>

using namespace std;


int main() {
    int n,i,leader=0;
    cout << "Number of Elements" << endl;
    cin >> n;
    int a[100];
    cout << "Enter Array Elements" << endl;

    for (i = 0; i < n; ++i) 
    {
        cin >> a[i];
    }
    /*while (i == (n - 1))
    {
        a[i] = leader;
    }*/
    /*for (i = n - 1;i >= 0;--i)*/ 
        a[i] = leader;
        //for the first leader,since the last number is always a leader as there is no element after it
      cout << a[n-1] << " ";
  
    for (i = n - 2; i >= 0; --i)//the last element is a leader so to the second last element to check the leader
    {
        if (a[i] > leader) //this will check if the new element is greater than the leader
        {
            cout << a[i] << " ";//prints the leader and stores the new leader
            leader = a[i];
        }
    }

    return 0;
}
