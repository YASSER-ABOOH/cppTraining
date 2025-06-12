#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    set<string> courseSet;

    // Inserting unique course codes
    courseSet.insert("CS101");
    courseSet.insert("MA102");
    courseSet.insert("PH103");
    courseSet.insert("CS101");  // Duplicate, will be ignored

    // Display using iterator
    cout << "Registered Unique Course Codes:\n";
    for (auto it = courseSet.begin(); it != courseSet.end(); ++it) {
        cout << *it << "\n";
    }

    // Search for a course
    string searchCode = "MA102";
    if (courseSet.find(searchCode) != courseSet.end()) {
        cout << searchCode << " is registered.\n";
    }

    // Erase a course
    courseSet.erase("PH103");

    cout << "\nAfter deletion:\n";
    for (const auto& code : courseSet) {
        cout << code << "\n";
    }

    return 0;
}