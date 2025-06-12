//Container-Wise Exploration

#include<iostream>
#include<vector>

using namespace std;

int main()
{

	vector<int> v = { 10, 20, 30 };

	// Normal iteration
	for (auto it = v.begin(); it != v.end(); ++it) 
		cout << *it << " ";

	cout << endl;

	// Reverse
	for (auto rit = v.rbegin(); rit != v.rend(); ++rit) 
		cout << *rit << " ";
}