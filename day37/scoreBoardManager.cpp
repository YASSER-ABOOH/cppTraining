#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	vector<int>scores;
	int score;
	while (1)
	{
		cin >> score;
		if (score != -1)
			scores.emplace_back(score);
		else
			break;
	}
	sort(scores.begin(), scores.end(), [](int a, int b)
		{
			return a > b;
		});
	
	int i = 0;
	cout << "All Scores (Sorted):";
	for (;i < scores.size();i++)
		cout << scores[i]<<" ";
	cout << endl;

	cout << "Top 3 Scores:";
	i = 0; 
	for (;i < 3;i++)
		cout << scores[i]<<" ";
	cout << endl;
	/*i = 0;
	cout << "Unique Score (Sorted):";
	for (;i < scores.size();i++)
	{
		if (scores[i] == scores[i + 1])
			scores[i] = scores[i + 1];
	}
	for (;i < scores.size();i++)
		cout << scores[i] << ' ';*/
}