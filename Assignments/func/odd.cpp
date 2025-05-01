#include <iostream>
using namespace std;
void printOddNumbers(int n, int m, int o);

int main() {
    printOddNumbers(1, 9, 2);
    return 0;
}
void printOddNumbers(int n, int m, int o) {
    for (int i = n; i <= m; i += o) {
        cout << i << " ";
    }
    cout << endl;
}

