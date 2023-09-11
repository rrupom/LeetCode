#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	string intToRoman(int num) {
		vector<string> s = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
		vector<int> value = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

		string result = "";

		while (num != 0) {
			for (int i = 0; i < value.size(); i++) {
				while (num >= value[i]) {
					result += s[i];
					num -= value[i];
				}
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

	int num;
	cin >> num;

	Solution sol;

	string answer = sol.intToRoman(num);

	cout << answer << endl;

	return 0;
}