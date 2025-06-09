//unordered_multiset

#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main() {
    unordered_multiset<string> words;

    // Insert elements (duplicates allowed)
    words.insert("apple");
    words.insert("banana");
    words.insert("apple");
    words.insert("orange");
    words.insert("banana");
    words.emplace("apple"); // Emplace

    // Display all elements
    cout << "All words (including duplicates):\n";
    for (const auto& w : words) {
        cout << w << "\n";
    }

    // Count occurrences of "apple"
    cout << "\nCount of 'apple': " << words.count("apple") << "\n";

    // Find "banana"
    auto it = words.find("banana");
    if (it != words.end()) {
        cout << "'banana' found, erasing one occurrence.\n";
        words.erase(it); // Erase one occurrence of "banana"
    }

    // Display after erasing one "banana"
    cout << "\nWords after erasing one 'banana':\n";
    for (const auto& w : words) {
        cout << w << "\n";
    }

    // Erase all "apple"
    size_t erased = words.erase("apple");
    cout << "\nErased " << erased << " occurrences of 'apple'.\n";

    // Show size
    cout << "Size after erasing all 'apple': " << words.size() << "\n";

    // Clear all
    words.clear();
    cout << "Cleared all words. Is empty? " << boolalpha << words.empty() << "\n";

    return 0;
}