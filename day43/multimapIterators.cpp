#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    multimap<string, string> booksByAuthor;

    // Inserting books (duplicates allowed for keys)
    booksByAuthor.insert({ "Dan Brown", "Inferno" });
    booksByAuthor.insert({ "Dan Brown", "The Da Vinci Code" });
    booksByAuthor.insert({ "J.K. Rowling", "Harry Potter" });
    booksByAuthor.insert({ "J.R.R. Tolkien", "The Hobbit" });

    // Display all entries
    cout << "Library Books:\n";
    for (multimap<string, string>::iterator it = booksByAuthor.begin(); it != booksByAuthor.end(); ++it) {
        cout << it->first << " -> " << it->second << "\n";
    }

    // Finding all books by "Dan Brown"
    string author = "Dan Brown";
    cout << "\nBooks by " << author << ":\n";
    auto range = booksByAuthor.equal_range(author);
    for (auto it = range.first; it != range.second; ++it) {
        cout << it->second << "\n";
    }

    return 0;
}