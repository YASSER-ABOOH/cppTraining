#include <iostream>
using namespace std;

int main() {
    int n, p = 1, d;
    cin >> n;

    while (n > 0) {
        d = n % 10;
        p *= d;
        n /= 10;
    }

    for (int i = 2; i * i <= p; i++)
        if (p % i == 0) {
            cout << "Box Remains Closed!" << endl;
            return 0;
        }

    cout << "Box Opens!" << endl;
    return 0;
}
