// Chat History Cleanup

#include <iostream>
#include <forward_list>
#include <string>

using namespace std;

void cln_msg(forward_list<string>& message) {
    auto pr = message.before_begin();
    for (auto cr = message.begin(); cr != message.end(); ) {
        if (cr->substr(0, 8) == "DELETED:") {
            cr = message.erase_after(pr);
        }
        else {
            pr = cr;
            cr++;
        }
    }
}

int main() {

    forward_list<string> message = {
        "Hi", "Hello", "DELETED: Spam", "How are you?", "DELETED: Abuse"
    };

    cln_msg(message);

    cout << endl;
    for (const string& msg : message) {
        cout << msg <<endl;
    }
    
}
