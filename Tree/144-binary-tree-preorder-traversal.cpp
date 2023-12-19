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
	vector<int> preorderTraversal(TreeNode* root) {
		vector<int> nodes;
		preorderHelper(root, nodes);
		return nodes;
	}
private:
	void preorderHelper(TreeNode* root, vector<int> &nodes) {
		if (root == NULL) {
			return;
		}

		nodes.emplace_back(root->val);
		preorderHelper(root->left, nodes);
		preorderHelper(root->right, nodes);
	}
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);


	return 0;
}