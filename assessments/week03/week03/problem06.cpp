//reverse sub-array
#include <iostream>
using namespace std;

int main() {
    int n,r,a[100];
    cout << "Number of elements"<<endl;
    cin >> n;
    for (int i = 0; i < n; i++) 
    {
        cout << "Enter elements"<<endl;
        cin >> a[i];
    }
    cout << "Enter for subarray" << endl;
    cin >> r;
    for (int i = 0; i < n; i += i) {
        int lt = i;
        int rt = (i + i - 1 < n) ? (i + i - 1) : (n - 1);

        while (lt < rt) {
            int temp = a[lt];
            a[lt] = a[rt];
            a[rt] = temp;
            lt++;
            rt--;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
