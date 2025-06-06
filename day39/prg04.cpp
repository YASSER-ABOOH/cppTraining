#include <iostream>
#include <map>
#include <unordered_map>
#include <set>
#include <deque>
#include <string>

using namespace std;

struct File { string name, owner; };
map<int, File> files;
unordered_map<int, int> freq, lastAccess;
unordered_map<string, set<int>> userAccess;
unordered_map<int, deque<pair<string, string>>> logs;
set<pair<int, int>> recent;
int timeStamp = 0;

void addFile(int id, const string& name, const string& owner) {
    if (files.count(id)) {
        cout << "File ID exists.\n";
        return;
    }
    files[id] = { name, owner };
    freq[id] = 0;
    cout << "Added: " << name << "\n";
}

void accessFile(int id, const string& type, const string& user) {
    if (!files.count(id)) {
        cout << "File not found.\n";
        return;
    }
    freq[id]++;
    recent.erase(make_pair(lastAccess[id], id));
    lastAccess[id] = ++timeStamp;
    recent.insert(make_pair(lastAccess[id], id));
    userAccess[user].insert(id);
    logs[id].push_back(make_pair(user, type));
    cout << user << " accessed " << files[id].name << " (" << type << ")\n";
}

void deleteFile(int id) {
    if (!files.count(id)) {
        cout << "File not found.\n";
        return;
    }
    recent.erase(make_pair(lastAccess[id], id));
    files.erase(id);
    freq.erase(id);
    lastAccess.erase(id);
    logs.erase(id);
    for (auto& u : userAccess)
        u.second.erase(id);
    cout << "Deleted file ID " << id << "\n";
}

void listAll() {
    cout << "[All Files]\n";
    for (auto& it : files)
        cout << "ID: " << it.first << " | " << it.second.name << " by " << it.second.owner << "\n";
}

void listRecent() {
    cout << "[Recent Files]\n";
    for (auto it = recent.rbegin(); it != recent.rend(); ++it)
        cout << "ID: " << it->second << " | " << files[it->second].name << " | Last: " << it->first << "\n";
}

void listByUser(const string& user) {
    if (!userAccess.count(user)) {
        cout << "No files by " << user << "\n";
        return;
    }
    cout << "[Files by " << user << "]\n";
    for (int id : userAccess[user])
        cout << "ID: " << id << " | " << files[id].name << "\n";
}

int main() {
    string cmd;
    while (true) {
        cout << "Command (ADD/ACCESS/DELETE/LIST_ALL/LIST_RECENT/LIST_BY_USER/EXIT): ";
        cin >> cmd;
        if (cmd == "ADD") {
            int id; string name, owner;
            cin >> id >> name >> owner;
            addFile(id, name, owner);
        }
        else if (cmd == "ACCESS") {
            int id; string type, user;
            cin >> id >> type >> user;
            accessFile(id, type, user);
        }
        else if (cmd == "DELETE") {
            int id; cin >> id;
            deleteFile(id);
        }
        else if (cmd == "LIST_ALL") listAll();
        else if (cmd == "LIST_RECENT") listRecent();
        else if (cmd == "LIST_BY_USER") {                                    
            string user; cin >> user;
            listByUser(user);
        }
        else if (cmd == "EXIT") break;
        else cout << "Invalid.\n";
    }
}
