//decimal to octal

#include <iostream>
using namespace std;

int main() {
    int d;
    cin >> d;
    int o[20];
    int i = 0;
    while (d > 0)
    {
        o[i++] = (d % 8);
        d /= 8;
    }    for (int j = i - 1; j >= 0; j--)
        cout << o[j];

    return 0;
}
