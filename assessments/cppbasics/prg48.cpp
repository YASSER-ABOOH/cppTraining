//decimal to binary
#include <iostream>
using namespace std;

int main() {
    int d;
    int b[32];
    int i = 0;
    cin >> d;
    if (d == 0) {
        cout << 0;
        return 0;
    }
    while (d > 0) {
        b[i++] = d % 2;
        d /= 2;
    }
    for (int j = i - 1; j >= 0; j--)
    cout << b[j];
   }
