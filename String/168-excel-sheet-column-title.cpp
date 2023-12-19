#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	string convertToTitle(int columnNumber) {
		string s = "";
		while (columnNumber) {
			char ch = 'A' + (columnNumber - 1) % 26;
			s = ch + s;
			columnNumber = (columnNumber - 1) / 26;
		}

		return s;
	}
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);


	return 0;
}