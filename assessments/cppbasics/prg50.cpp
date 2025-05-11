//decimal to hexadecimal
#include <iostream>
using namespace std;

int main() {
    int d;
    cin >> d;

    char h[20];
    int i = 0, dig;

    while (d > 0) {
        dig = d % 16;
        h[i++] = (dig < 10) ? (dig + '0') : (dig - 10 + 'A');
        d /= 16;
    }

    for (i = i - 1; i >= 0; i--) {
        cout << h[i];
    }

    return 0;
}
