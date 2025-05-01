#include <iostream>
using namespace std;

bool magicSquare(int a[10][10], int N) {

    int m = 0,i,j;
    for ( j = 0; j < N; j++) {
        m += a[0][j];
    }

    for (i = 0; i < N; i++) {
        int R = 0;
        for (int j = 0; j < N; j++) {
            R += a[i][j];
        }
        if (R != m) {
            return false;
        }
    }

    for ( j = 0; j < N; j++) {
        int C = 0;
        for (int i = 0; i < N; i++) {
            C += a[i][j];
        }
        if (C != m) {
            return false;
        }
    }

    int D1 = 0;
    for ( i = 0; i < N; i++) {
        D1 += a[i][i];
    }
    if (D1 != m) {
        return false;
    }

    int D2 = 0;
    for ( i = 0; i < N; i++) {
        D2 += a[i][N - i - 1];
    }
    if (D2 != m) {
        return false;
    }

    return true;
}

int main() {
    int N,i,j;
    cout << "Enter the size of the matrix (N): ";
    cin >> N;
    int a[10][10];
    cout << "Enter the elements of the matrix:" << endl;
    for (i = 0; i < N; i++) {
        for ( j = 0; j < N; j++) {
            cin >> a[i][j];
        }
    }

    if (magicSquare(a, N)) {
        cout << "It is a Magic Square!" << endl;
    }
    else {
        cout << "Not a Magic Square." << endl;
    }

    return 0;
}