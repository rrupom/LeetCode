#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	string addBinary(string a, string b) {
		int la = a.size() - 1;
		int lb = b.size() - 1;

		string str = "";
		int carry = 0;

		while (la >= 0 or lb >= 0 or carry) {
			if (la >= 0) {
				carry += (a[la--] - '0');
			}
			if (lb >= 0) {
				carry += (b[lb--] - '0');
			}
			str += (carry % 2 + '0');
			carry /= 2;
		}

		reverse(str.begin(), str.end());

		return str;
	}
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string a, b;
	cin >> a >> b;
	Solution sol;

	string ans = sol.addBinary(a, b);
	cout << ans << endl;

	return 0;
}