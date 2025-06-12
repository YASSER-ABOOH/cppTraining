#include<iostream>
#include<iterator>
#include<deque>
#include<algorithm>
#include<list>

using namespace std;

int main()
{
	deque<char>d = { 'A','B','C' };
	auto it = d.begin();
	cout << it[1] << endl;
}