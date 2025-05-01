#include <iostream>
using namespace std;

void m(int);

int main() {
    int n = 1234;
    m(n);
    cout << endl;
    return 0;
}
void m(int n) {
    if (n == 0) {
        return;
    }
    cout << n % 10 << " ";
    m(n / 10);
}