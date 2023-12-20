#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
		map<TreeNode*, bool> mp;
		mp[cloned] = true;
		queue<TreeNode*> q;
		q.push(cloned);

		while (!q.empty()) {
			TreeNode* cur = q.front();
			q.pop();

			if (cur->val == target->val) return cur;
			if (cur->left != NULL and !mp[cur->left]) {
				mp[cur->left] = true;
				q.push(cur->left);
			}
			if (cur->right != NULL and !mp[cur->right]) {
				mp[cur->right] = true;
				q.push(cur->right);
			}
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