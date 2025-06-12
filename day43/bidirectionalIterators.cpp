//Bidirectional Iterator

#include <list>
#include <iostream>
using namespace std;


int main() {
    list<int> lst = { 1, 2, 3 };
    auto it = lst.end();
    /*=
    --it;  // Bidirectional movement
    cout << *it;  // Output: 3
}