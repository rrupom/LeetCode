/**
 Probelm Link : https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/description/
 Author : Rakib Talukder Rupom
 Language : C++
 Platform : LeetCode
 Date : 26-12-23
**/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<int> minOperations(string boxes) {
		vector<int> v;
		int n = boxes.size();
		for (int i = 0; i < n; i++) {
			int cur = 0;
			for (int j = 0; j < n; j++) {
				if (boxes[j] == '1') {
					cur += abs(i - j);
				}
			}
			v.emplace_back(cur);
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