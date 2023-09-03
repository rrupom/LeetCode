#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int jump(vector<int>& nums) {
		int left = 0;
		int right = 0;
		int move = 0;
		int n = nums.size() - 1;

		while (right < n) {
			int maxReach = 0;
			for (int i = left; i <= right; i++) {
				maxReach = max(maxReach, i + nums[i]);
			}
			left = right + 1;
			right = maxReach;
			// cout << "left and right " << left << " " << right << endl;
			move++;
		}

		return move;
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
	int answer = sol.jump(v);

	cout << answer << endl;


	return 0;
}

// 7 0 9 6 9 6 1 7 9 0 1 2 9 0 3