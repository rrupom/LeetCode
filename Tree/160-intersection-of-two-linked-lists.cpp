#include<bits/stdc++.h>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
		unordered_map<ListNode*, bool> mp;
		ListNode* curA = headA;
		while (curA != NULL) {
			mp[curA] = true;
			curA = curA->next;
		}
		ListNode* curB = headB;
		while (curB != NULL) {
			if (mp[curB]) return curB;
			curB = curB->next;
		}

		return NULL;
	}
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);


	return 0;
}