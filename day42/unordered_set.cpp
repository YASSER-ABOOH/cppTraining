//Unordered_set

#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    unordered_set<std::string> cities;

    // Insert elements
    cities.insert("Mumbai");
    cities.insert("Delhi");
    cities.insert("Chennai");
    cities.insert("Kolkata");

    // Emplace (in-place construction)
    cities.emplace("Hyderabad");

    // Display contents
    cout << "Cities in the set:\n";
    for (const auto& city : cities) {
        cout << city << "\n";
    }

    // Count & Find
    string searchCity = "Delhi";
    if (cities.count(searchCity)) {
        cout << "\n" << searchCity << " found in the set.\n";
    }

    // Using find()
    auto it = cities.find("Mumbai");
    if (it != cities.end()) {
        cout << *it << " is found. Erasing it.\n";
        cities.erase(it);
    }

    // Show size and load factor
    cout << "\nSet size: " << cities.size() << "\n";
    cout << "Bucket count: " << cities.bucket_count() << "\n";
    cout << "Load factor: " << cities.load_factor() << "\n";

    // Rehashing
    cities.rehash(20); // Force rehash into 20 buckets
    cout << "After rehash - New bucket count: " << cities.bucket_count() << "\n";

    cities.rehash(35);
    cout << "After rehash -Newest bucket count: " << cities.bucket_count() << endl;
    cout << "Load factor: " << cities.load_factor() << endl;

    // Clear
    cities.clear();
    cout << "Set cleared. Is empty? " << boolalpha << cities.empty() << "\n";

    return 0;
}