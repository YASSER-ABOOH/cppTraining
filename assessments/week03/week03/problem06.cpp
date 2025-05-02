//reverse sub-array
#include <iostream>
using namespace std;

int main() {
    int n,r,a[100];
    cout << "Number of elements"<<endl;
    cin >> n;
    cout << "Enter elements" << endl;
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    cout << "Enter for subarray" << endl;
    cin >> r;
    //for (int i = 0; i < n; i += i)
    for(int i=0;i<n;i+=r)//for groups of 3
    {
        int rt, lt = i;
        rt = i + r - 1;
        if (rt >= n) {
            rt = n - 1;
        }
        while (lt < rt) {
            int c = a[lt];//assigning a temp variable to swap the values of left and right 
            a[lt] = a[rt];
            a[rt] = c;
            lt++;//move left
            rt--;//move right
        }
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
