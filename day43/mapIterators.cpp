#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<int, string> studentMap;

    // Insertion using insert() and []
    studentMap[101] = "Alice";
    studentMap[102] = "Bob";
    studentMap.insert({ 103, "Charlie" });

    // Update using operator[]
    studentMap[102] = "Bobby";

    // Traversing using iterator
    cout << "Student List:\n";
    for (map<int, string>::iterator it = studentMap.begin(); it != studentMap.end(); ++it) {
        cout << "Roll: " << it->first << ", Name: " << it->second << "\n";
    }

    // Searching
    int roll_to_search = 103;
    map<int, string>::iterator searchIt = studentMap.find(roll_to_search);
    if (searchIt != studentMap.end()) {
        cout << "Found: " << searchIt->first << " -> " << searchIt->second << "\n";
    }

    // Erasing by key
    studentMap.erase(101);

    cout << "\nAfter deletion:\n";
    for (auto& p : studentMap) {
        cout << p.first << " => " << p.second << "\n";
    }

    return 0;
}