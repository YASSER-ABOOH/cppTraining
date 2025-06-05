//Batch Word Processing

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector <string> frts = { "Apple", "banana", "apple", "Orange", "BANANA", "grape" };

	for (auto& frt : frts)
		cout << frt << endl;


	for (auto& frt : frts)
		transform(frt.begin(), frt.end(), frt.begin(), ::tolower);

	sort(frts.begin(), frts.end(), [](string str1, string str2) {
		return  str1 < str2;
		});

	auto newEnd = unique(frts.begin(), frts.end());

	frts.erase(newEnd, frts.end());

	for (auto& frt : frts)
		cout << frt << endl;

	return 0;

}