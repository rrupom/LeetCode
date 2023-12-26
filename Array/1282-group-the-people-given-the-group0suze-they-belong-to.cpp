/**
 Probelm Link : https://leetcode.com/problems/group-the-people-given-the-group-size-they-belong-to
 Author : Rakib Talukder Rupom
 Language : C++
 Platform : LeetCode
 Date : 26-12-23
**/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
		unordered_map<int, int> mp;
		vector<vector<int>> v;
		int n = groupSizes.size();
		for (int i = 0; i < n; i++) {
			mp[groupSizes[i]]++;
		}

		for (auto it : mp) {
			int key = it.first;
			int count = it.second / key;
			int i = 0;
			vector<int> temp;
			while (count--) {
				while (i < n and temp.size() < key) {
					if (groupSizes[i] == key) {
						temp.emplace_back(i);
					}
					i++;
				}
				v.emplace_back(temp);
				temp.clear();
			}
		}

		return v;
	}
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);


	return 0;
}