#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int power = 1;
    while (power * 2 <= n) power *= 2;
    cout << power;
    return 0;
}
