//Input Iterator

#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main() {
    istream_iterator<int> inIt(cin);        // begin of input stream
    istream_iterator<int> endIt;                 // end-of-stream iterator

    vector<int> numbers(inIt, endIt);            // reads until EOF (Ctrl+Z in Windows or Ctrl+D in Linux)

    for (int n : numbers) {
        cout << n << " ";
    }

    return 0;
}