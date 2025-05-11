#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string h;
    cin >> h;
    int d = 0;
    int n = h.size();
    int v;

    for (int i = 0; i < n; i++) {
        char dig = h[i];

     
        if (dig >= '0' && dig <= '9')
            v = dig - '0';
        else
            v = dig - 'A' + 10;

        d += v * pow(16, n - 1 - i);
    }

    cout << d;
    return 0;
}
