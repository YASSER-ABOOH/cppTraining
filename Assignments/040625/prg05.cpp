#include <iostream>
#include <set>
//#include<algorithm>

using namespace std;

int main() {
    set<int> uniq;
    string input;
    
    int user_id;

    while (1)
    {
        cin >> input;
    
        if (input == "VISIT") {
            cin >> user_id;
            uniq.insert(user_id);
        }
        else if (input == "UNIQUE") {
            cout << uniq.size() << endl;
        }
        else if (input == "TOP") {
            for (int id : uniq) {
                cout << id << " ";
            }
            cout << endl;
        }
        else
            return 0;
    }

    return 0;
}
