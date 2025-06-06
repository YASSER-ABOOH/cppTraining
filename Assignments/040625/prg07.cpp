//Unique Stock Prices
#include<iostream>
#include<set>

using namespace std;

int main() {
    set<int> stock;
    string input;

    int price;

    while (1)
    {
        cin >> input;

        if (input == "ADD") {
            cin >> price;
            stock.insert(price);
        }
        else if (input =="REMOVE")
        {
            cin >> price;
            stock.erase(stock.find(price));
            cout << price << "removed"<<endl;
        }
        else if (input == "MINMAX")
        {
            cout << *stock.rbegin() << " " << *stock.begin() << endl;
        }
        else
            return 0;
    }

    return 0;
}
