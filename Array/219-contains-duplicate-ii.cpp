#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	bool containsNearbyDuplicate(vector<int>& nums, int k) {
		unordered_map<int, pair<int, bool>> mp;
		for (int i = 0; i < nums.size(); i++) {
			if (mp[nums[i]].second) {
				if (abs(i - mp[nums[i]].first) <= k) return true;
			}

			mp[nums[i]] = {i, true};
		}

		return false;
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

	int k;
	cin >> k;

	Solution sol;

	cout << sol.containsNearbyDuplicate(v, k);

	return 0;
}