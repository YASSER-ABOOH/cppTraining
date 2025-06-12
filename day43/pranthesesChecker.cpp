#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool bal(const string& expression) {
    stack<char> ch;

    for (char c : expression) {
        if (c == '(' || c == '{' || c == '[') 
        {
            ch.push(c);
        }
        else if (c == ')' || c == '}' || c == ']')
        {
            if (ch.empty()) 
                return 0;
            
            char top = ch.top();
            if ((c == ')' && top == '(') ||
                (c == '}' && top == '{') ||
                (c == ']' && top == '[')) {
                ch.pop();
            }
            else 
                return 0;
        }
    }return ch.empty();
}

int main() {
    string input;
    cin >> input;

    if (bal(input))
        cout << "Balanced" << endl;
    else
        cout << "Not Balanced" << endl;
}