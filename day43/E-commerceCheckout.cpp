//E-commerce Checkout

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // for accumulate

using namespace std;

int main() {
    // Step 1: Initialize vector with cart prices
    vector<int> cart = { 199, 599, 999, 1, 0, 75, 1200 };

    cout << "Cart Prices in Reverse: ";
    // Step 2: Use reverse_iterator to print cart in reverse
    for (vector<int>::reverse_iterator rit = cart.rbegin(); rit != cart.rend(); ++rit) {
        cout << *rit << " ";
    }
    cout << "\n";

    // Step 3: Apply ?50 discount to items over ?500
    for (vector<int>::iterator it = cart.begin(); it != cart.end(); ++it) {
        if (*it > 500) *it -= 50;
    }

    cout << "Cart after Discount: ";
    for (int price : cart) cout << price << " ";
    cout << "\n";

    // Step 4: Count free items (< ?1) using const_iterator
    int free_items = 0;
    for (vector<int>::const_iterator cit = cart.cbegin(); cit != cart.cend(); ++cit) {
        if (*cit < 1) ++free_items;
    }
    cout << "Number of Free Items: " << free_items << "\n";

    // Step 5: Sort cart and compute total using accumulate
    sort(cart.begin(), cart.end());
    int total = accumulate(cart.begin(), cart.end(), 0);

    cout << "Sorted Cart: ";
    for (int p : cart) cout << p << " ";
    cout << "\nTotal Checkout Amount: " << total << "\n";

    return 0;
}