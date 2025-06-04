//array CONTAINER

#include <iostream>
#include <array>
#include <algorithm> // for sort, reverse

using namespace std;

int main() {
    // Declare and initialize an array of 5 integers
    array<int, 5> arr = { 10, 20, 30, 40, 50 };

    // Accessing elements
    cout << "Element at index 2 (using at): " << arr.at(2) << std::endl;
    cout << "First element: " << arr.front() << std::endl;
    cout << "Last element: " << arr.back() << std::endl;

    // Size and empty check
    cout << "Size of array: " << arr.size() << std::endl;
    cout << "Is array empty? " << (arr.empty() ? "Yes" : "No") << std::endl;

    // Fill array
    arr.fill(7);
    cout << "After fill: ";
    for (int i : arr) cout << i << " ";
    cout << endl;

    // Reassign values
    arr = { 1, 4, 3, 2, 5 };

    // Sort array
    sort(arr.begin(), arr.end());
    cout << "After sorting: ";
    for (int i : arr) cout << i << " ";
    cout << endl;

    // Reverse array
    reverse(arr.begin(), arr.end());
    cout << "After reversing: ";
    for (int i : arr) cout << i << " ";
    cout << endl;

    // Data pointer access
    int* p = arr.data();
    cout << "Pointer to first element: " << *p << endl;

    return 0;
}