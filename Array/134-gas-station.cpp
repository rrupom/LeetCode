#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
		int n = gas.size();
		int index = 0;
		int total = 0;
		int curr = 0;

		for (int i = 0; i < n; i++) {
			total += gas[i] - cost[i];
			curr += gas[i] - cost[i];
			if (curr < 0) {
				index = i;
				curr = 0;
			}
		}

		if (total < 0) return -1;
		else return index;
	}
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, x;
	vector<int> gas, cost;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x;
		gas.push_back(x);
	}

	for (int i = 0; i < n; i++) {
		cin >> x;
		cost.push_back(x);
	}

	Solution sol;

	int answer = sol.canCompleteCircuit(gas, cost);

	cout << answer << endl;

	return 0;
}