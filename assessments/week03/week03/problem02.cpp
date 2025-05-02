//element that appear only once
#include <iostream>

using namespace std;
void count(int a[], int n);


int main() {
    int n;//for element number
    cout << "ENter number if elements" << endl;
    cin >> n;
    int a[100];//again constant error, so giving number ,then later changing
    cout << "Enter the elements" << endl;

    for (int i = 0; i < n; i++) {
//        cout << "Enter the elements" << endl;
        cin >> a[i];
    }
    count(a, n);

    return 0;
}

void count(int a[],int n) 
{
    for (int i = 0; i < n; i += 2) 
    {
        if (i+1>=n || (a[i]) != a[i + 1])//makes sure a[i] appears only once and not seconf time
        {
            cout << a[i] << endl;
            //return 0;
            break;
        }
    }
}
