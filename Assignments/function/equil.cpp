#include <iostream>
using namespace std;

int findEquilibriumIndex(int a[], int n) {
    int sum = 0, sum_r = 0,i;

    for ( i = 0; i < n; i++) {
        sum += a[i];
    }

    for ( i = 0; i < n; i++) {
        sum -= a[i]; 
        if (sum_r == sum) {
            return i + 1; 
        }
        sum_r += a[i];  
    }

    return -1;
}

int main() {
    int b[] = { -7, 1, 5, 2, -4, 3, 0 };
    int c[] = { 0, 0, 0, 0, -1 };

    cout << findEquilibriumIndex(b, 7) << endl;
    cout << findEquilibriumIndex(c, 5) << endl;

}
