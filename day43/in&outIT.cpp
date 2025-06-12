//Filecopy using input and output Iterators

#include <fstream>
#include <iterator>
#include <algorithm>

using namespace std;

int main() {
    ifstream inFile("input.txt");
    ofstream outFile("output.txt");

    istream_iterator<string> inIt(inFile), endIt;
    ostream_iterator<string> outIt(outFile, "\n");

    copy(inIt, endIt, outIt);

    return 0;
}