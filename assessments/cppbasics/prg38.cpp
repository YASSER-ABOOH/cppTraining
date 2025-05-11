//strlen using recursion

#include <iostream>
#include <cstring>

using namespace std;

int len(char a[], int i) {
    if (a[i] == '\0') return i;
    return len(a, i + 1);
}

int main() {
    char str[100];
    cin.getline(str, 100);

    cout << "strlen = " << len(str, 0) << endl;

    return 0;
}
