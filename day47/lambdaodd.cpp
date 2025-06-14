#include<iostream>
#include<vector>
using namespace std;

vector<int>nums;
int main()
{
	auto odd_even = [](int n, int flag, int turn = 0)
		{
			for (int i = 0;i < n;)
			{
				if(turn==flag){
					if (i % 2 == flag)
					{
						cout << i << " " << endl;
						nums.push_back(i);
						turn = ! turn;
						i++;
					}
				}
		}
		};
	odd_even(20, 1);
//	odd_even(20, 0);

}