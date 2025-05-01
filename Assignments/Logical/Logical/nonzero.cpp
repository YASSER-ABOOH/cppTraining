#include <iostream>
using namespace std;

int main() {
    int n,dig;
    cin >> n;

    while (n > 0) {
        dig = n % 10;
        n /= 10;

        if (dig != 0) {
            if (dig % 2 == 0) {
                cout << "Valid" ;
            }
            else {
                cout << "Invalid";
            }
            return 0;
        }
    }

    cout << "Invalid" ;
}
