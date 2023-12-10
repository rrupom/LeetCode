#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	string defangIPaddr(string address) {
		string ans;
		for (int i = 0; i < address.length(); i++)
		{
			if (address[i] == '.')
				ans += "[.]";
			else
				ans.push_back(address[i]);
		}
		return ans;
	}
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string address;
	cin >> address;

	Solution sol;
	cout << sol.defangIPaddr(address);

	return 0;
}