#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<string> cellsInRange(string s) {
		int row1 = (int)s[1] - '0';
		int row2 = (int)s[4] - '0';
		char col1 = s[0];
		char col2 = s[3];
		// cout << r1 << " " << r2 << " " << col1 << " " << col2 << endl;
		vector<string> result;

		for (char i = col1; i <= col2; i++) {
			for (int j = row1; j <= row2; j++) {
				string str = i + to_string(j);
				result.push_back(str);
			}
		}

		return result;
	}
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	Solution sol;
	string input;
	cin >> input;
	vector<string> ans = sol.cellsInRange(input);

	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";
	}

	return 0;
}