#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	string sortSentence(string s) {
		istringstream tokenStream(s);
		// vector<string> tokens;
		vector<pair<int, string>> tokens;
		string token;

		while (tokenStream >> token) {
			int pos = token[token.length() - 1] - '0';
			tokens.push_back({pos, token.substr(0, token.length() - 1)});
		}

		sort(tokens.begin(), tokens.end());

		string ans = "";

		for (int i = 0; i < tokens.size(); i++) {
			if (i < tokens.size() - 1) {
				ans += tokens[i].second + " ";
			} else {
				ans += tokens[i].second;
			}
		}


		return ans;
	}
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	Solution sol;

	string input;
	getline(cin, input);

	string ans = sol.sortSentence(input);
	cout << ans << endl;

	return 0;
}