#include <iostream>
using namespace std;
void energy(int);
int main() {
    int n;
    cin >> n;

    energy(n);

    return 0;
}

void energy(int n) {
    if (n <= 0) {
        return;
    }

    cout << n << " ";

    energy(n / 2);
}

