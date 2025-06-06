//File Tracker System

#include<iostream>
#include<map>
#include<set>
#include<unordered_map>
#include<deque>
#include<vector>
//#include<algorithm>

using namespace std;

struct FileMeta
{
	string fileName;
	string ownerUser;
};

map<int, FileMeta>fileMetaData;
unordered_map<int, int>accessFrequency;
unordered_map<int, int>lastAccessedTimeStamp;
unordered_map<string, string>filesAccessed;
unordered_map<int, deque<pair<string, string>>>accessHistory;
set<pair<int, int>>quickRetrieval;

int timestamp = 0;