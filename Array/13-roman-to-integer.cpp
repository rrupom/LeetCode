#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int romanToInt(string s) {
		map<char, int> mp;
		mp['I'] = 1;
		mp['V'] = 5;
		mp['X'] = 10;
		mp['L'] = 50;
		mp['C'] = 100;
		mp['D'] = 500;
		mp['M'] = 1000;

		int sum = 0;
		int i = 0;
		int n = s.size();
		for (i = 0; i < n; i++) {
			if (i == n - 1) {
				sum += mp[s[i]];
			} else if (mp[s[i]] < mp[s[i + 1]]) {
				sum += (mp[s[i + 1]] - mp[s[i]]);
				i++;
			} else {
				sum += mp[s[i]];
			}
		}

		return sum;
	}
};

