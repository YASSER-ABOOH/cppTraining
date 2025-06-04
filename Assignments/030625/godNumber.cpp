#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

template<typename T1>

int godNumber(const T1& s)
{
	int freq[10] = { 0 };

	for (auto ch : s)
	{
		if (ch >= '0' && ch <= '9')
			freq[ch - '0']++;
	}
	int maxdef = 0;
	int mindef = 1000;
	int i = 0;
	for (;i <= 9;i++)
	{
		if (freq[i] > 0)
		{
			int defVal = i * freq[i];
			maxdef = max(maxdef, defVal);
			mindef = min(mindef, defVal);
		}
	}

if (maxdef == mindef)
{
	return maxdef;
}
return maxdef - mindef;
}

int main()
{
	string s;
	cin >> s;
	cout << godNumber(s) << endl;
	vector<char> chars(s.begin(), s.end());
	cout << "God Number: " << godNumber(chars) << endl;
}