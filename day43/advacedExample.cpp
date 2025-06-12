#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> data = { 10, 20, 30, 40, 50 };

    cout << "Forward:\n";
    for (auto it = data.begin(); it != data.end(); ++it)
        cout << *it << " ";

    cout << "\nReverse:\n";
    for (auto rit = data.rbegin(); rit != data.rend(); ++rit)
        cout << *rit << " ";

    cout << "\nRead-only check:\n";
    for (set<int>::const_iterator cit = data.cbegin(); cit != data.cend(); ++cit) {
        cout << *cit << " ";
        // *cit += 5; // ? error
    }
}