#include <iostream>
using namespace std;

int main() {
    int n, perfect = 0;
    cin >> n;

    for (int i = 1; i < n; i++) 
    {
        if (n % i == 0) {
            perfect += i;
        }
    }

    if (n == perfect) {
        cout << "Perfect" << endl;
    }
    else {
        cout << "Imperfect" << endl;
    }

    return 0;
}
