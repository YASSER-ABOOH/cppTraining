//string CONTAINER

#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1 = "Hello";
    string str2 = "World";

    // Concatenation
    string str3 = str1 + " " + str2;
    cout << "Concatenated: " << str3 << "\n";

    // Append
    str3.append("!");
    cout << "Appended: " << str3 << "\n";

    // Access
    cout << "First character: " << str3[0] << "\n";

    // Length
    cout << "Length: " << str3.length() << "\n";

    // Substring
    string sub = str3.substr(6, 5);
    cout << "Substring: " << sub << "\n";

    // Find
    size_t pos = str3.find("World");
    if (pos != string::npos)
        cout << "'World' found at position: " << pos << "\n";

    // Replace
    str3.replace(6, 5, "Universe");
    cout << "After replace: " << str3 << "\n";

    // Compare
    if (str1 == "Hello")
        cout << "str1 equals 'Hello'\n";

    // Clear
    str1.clear();
    cout << "str1 after clear (length): " << str1.length() << "\n";





    return 0;
}