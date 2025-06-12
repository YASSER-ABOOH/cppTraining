//Forward Iterator.

#include <forward_list>
#include <iostream>
using namespace std;

int main() {
    forward_list<int> fl = { 1, 2, 3 };
    for (auto it = fl.begin(); it != fl.end(); ++it)
        cout << *it << " ";
}