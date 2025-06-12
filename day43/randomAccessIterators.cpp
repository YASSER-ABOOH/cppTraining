//Random Access Iterators
#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> v = { 10, 20, 30, 40 };
    auto it = v.begin();
    it += 2;
    cout << *it;  // Output: 30
}