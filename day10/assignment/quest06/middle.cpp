#include <iostream>
using namespace std;
int mid(int a,int b,int c);

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << mid(a, b, c) << endl;
    return 0;
}

int mid(int a, int b, int c) {
    if ((a > b && a < c) || (a < b && a > c)) {
        return a;
    }
    else if ((b > a && b < c) || (b < a && b > c)) {
        return b;
    }
    else {
        return c;
    }
}