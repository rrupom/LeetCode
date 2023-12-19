#include<bits/stdc++.h>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	bool hasCycle(ListNode *head) {
		unordered_map<ListNode*, bool> mp;
		ListNode* cur = head;
		while (cur != NULL) {
			if (mp[cur] == true) {
				return true;
			} else {
				mp[cur] = true;
				cur = cur->next;
			}
		}

		return false;
	}
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);


	return 0;
}