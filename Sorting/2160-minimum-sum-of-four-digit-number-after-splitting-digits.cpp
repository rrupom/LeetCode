#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int minimumSum(int num) {
		vector<int> v;

		while (num) {
			int digit = num % 10;
			num /= 10;
			v.push_back(digit);
		}

		sort(v.begin(), v.end());

		return v[0] * 10 + v[2] + v[1] * 10 + v[3];
	}
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	Solution sol;
	int number;
	cin >> number;

	int ans = sol.minimumSum(number);
	cout << ans << endl;

	return 0;
}