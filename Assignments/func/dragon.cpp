#include <iostream>
using namespace std;

void printSkip(int n, int o, int m) {
    for (int i = n; i <= o; i++) {
        if (i% m == 0) {
            continue;
        }
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    printSkip(1, 10, 3);
    return 0;
}
