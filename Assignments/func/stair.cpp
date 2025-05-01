#include <iostream>
using namespace std;

int stairwaySquares(int n);
int main() {
    int n = 3;
    cout << "Sum of squares for n = " << n << " is: " << stairwaySquares(n) << endl;
    return 0;
}
int stairwaySquares(int n)

{
    if (n == 0) {
        return 0;
    }
    return (n * n) + stairwaySquares(n - 1);
}
