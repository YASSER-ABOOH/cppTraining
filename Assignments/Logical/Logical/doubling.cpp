#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, num = 1;
    cin >> n;
    /*while (n>0)

    {
        n--;
        sum+=n;
        n+=2;
        */
        while (n--) {
        sum += num;
        num *= 2;
    }

    cout << sum << endl;
    return 0;
}
