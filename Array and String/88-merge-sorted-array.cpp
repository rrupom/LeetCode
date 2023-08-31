#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		vector<int> answer;
		int i, j;
		for (i = 0, j = 0; i < m and j < n;) {
			if (nums1[i] <= nums2[j]) {
				answer.push_back(nums1[i++]);
			}
			else {
				answer.push_back(nums2[j++]);
			}
		}
		while (i < m) {
			answer.push_back(nums1[i++]);
		}
		while (j < n) {
			answer.push_back(nums2[j++]);
		}

		nums1.clear();
		nums1.assign(answer.begin(), answer.end());

		for (int i = 0; i < nums1.size(); i++) {
			cout << nums1[i] << " ";
		}
	}
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	vector<int> nums1, nums2;
	int m = 3, n = 3;
	nums1 = {1, 2, 3, 0, 0, 0};
	nums2 = {2, 5, 6};

	Solution sol;
	sol.merge(nums1, m, nums2, n);

	return 0;
}