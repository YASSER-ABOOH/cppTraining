//Output Iterator

#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    vector<int> v = { 10, 20, 30, 40 };

    ostream_iterator<int> outIt(cout, " ");   // output with a space
    copy(v.begin(), v.end(), outIt);               // write to output stream

    return 0;
}