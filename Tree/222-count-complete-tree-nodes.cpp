#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
	int countNodes(TreeNode* root) {
		vector<int> nodes;
		helper(root, nodes);

		int count = 0;
		for (int i = 0; i < nodes.size(); i++) {
			if (nodes[i] != -100) {
				++count;
			} else break;
		}

		return count;
	}
private:
	void helper(TreeNode* root, vector<int> &nodes) {
		queue<TreeNode*> q;
		q.push(root);
		while (!q.empty()) {
			TreeNode* cur = q.front();
			q.pop();
			if (cur != NULL) {
				nodes.push_back(cur->val);
			}
			if (cur == NULL) {
				nodes.push_back(-100);
			}
			if (cur != NULL) q.push(cur->left);
			if (cur != NULL) q.push(cur->right);
		}

	}
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);


	return 0;
}