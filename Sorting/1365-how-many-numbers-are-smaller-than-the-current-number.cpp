#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
		vector<int> v;

		for (int i = 0; i < nums.size(); i++) {
			int total = 0;
			for (int j = 0; j < nums.size(); j++) {
				if (nums[i] > nums[j]) {
					++total;
				}
			}

			v.emplace_back(total);
		}

		return v;
	}
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, x;
	vector<int> v;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x;
		v.push_back(x);
	}

	Solution sol;

	vector<int> ans = sol.smallerNumbersThanCurrent(v);

	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";
	}

	return 0;
}