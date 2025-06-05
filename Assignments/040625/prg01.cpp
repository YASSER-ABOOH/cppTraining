//Text Editor Buffer

#include<iostream>
#include<list>
#include<string>

using namespace std;

int main() {
	list<string> T1;
	int cur = 0;
	string cmd, ln;
	while (1) {
		cout << "Enter command: ";
		cin >> cmd;
		if (cmd == "INSERT") {
			cout << "Enter line to insert: " << endl;
			cin >> ln;
			auto it = T1.begin();
			for (int i = 0; i < cur; i++) {
				it++;
			}

			T1.insert(it, ln);
			cur++;
		}
		else if (cmd == "UP") {
			if (cur > 0) {
				cur--;
			}
			else {
				cout << "Cursor is already in the top";
			}
		}
		else if (cmd == "DOWN") {
			if (cur < T1.size()) {
				cur++;
			}
			else {
				cout << "Cursor is already in the bottom";
			}
		}
		else if (cmd == "PRINT") {
			cout << "Text Buffer: ";
			for (auto& line : T1) {
				cout << line << endl;
			}
		}
		else if (cmd == "EXIT") {
			break;
		}
		else {
			cout << "Invalid command." << endl;

		}
	}
}