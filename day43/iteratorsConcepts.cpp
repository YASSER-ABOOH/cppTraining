//All Iterators Concepts

#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <iterator>
#include <algorithm>

using namespace std;

int main() {
    vector<int> vec = { 10, 20, 30, 40, 50 };

    // 1. Normal Iterator
    cout << "Using normal iterator:\n";
    vector<int>::iterator it;
    for (it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " ";
    }
    cout << "\n";

    // 2. Reverse Iterator
    cout << "Using reverse iterator:\n";
    for (auto rit = vec.rbegin(); rit != vec.rend(); ++rit) {
        cout << *rit << " ";
    }
    cout << "\n";

    // 3. Constant Iterator
    cout << "Using const_iterator (read-only):\n";
    for (vector<int>::const_iterator cit = vec.cbegin(); cit != vec.cend(); ++cit) {
        cout << *cit << " ";
    }
    cout << "\n";

    // 4. Modify values with iterator
    cout << "Doubling each element:\n";
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        *it *= 2;
        cout << *it << " ";
    }
    cout << "\n";

    // 5. Using advance and next
    list<string> names = { "Alice", "Bob", "Charlie", "Diana" };
    auto lit = names.begin();
    advance(lit, 2);  // move 2 positions forward
    cout << "2nd index in list: " << *lit << "\n";

    // 6. Using prev
    auto prevIt = prev(lit);
    cout << "Previous element: " << *prevIt << "\n";

    // 7. Using distance
    cout << "Distance from start to lit: " << distance(names.begin(), lit) << "\n";

    // 8. Using inserter and copy
    set<int> s = { 100, 200 };
    copy(vec.begin(), vec.end(), inserter(s, s.begin()));
    cout << "Set after inserting vector elements:\n";
    for (int x : s) cout << x << " ";
    cout << "\n";

    // 9. ostream_iterator
    cout << "Using ostream_iterator to print vector:\n";
    copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, " "));
    cout << "\n";

    return 0;
}