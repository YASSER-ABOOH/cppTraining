#include <iostream>
using namespace std;

int main() {
    int n, count = 0,dig;
    cin >> n;

    while (n > 0) {
        /*n /= 10;
        dig = n % 10;
        if (dig = n) {
            count++;
        }
        */
        if (n % 2 == 1) {
            count++;
        }
        n /= 2;
    }

    cout << count << endl;
    return 0;
}
