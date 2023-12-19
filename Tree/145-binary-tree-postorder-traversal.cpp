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
	vector<int> postorderTraversal(TreeNode* root) {
		vector<int> nodes;
		postOrderHelper(root, nodes);
		return nodes;
	}
private:
	void postOrderHelper(TreeNode* root, vector<int> &nodes) {
		if (root == NULL) return;
		postOrderHelper(root->left, nodes);
		postOrderHelper(root->right, nodes);
		nodes.emplace_back(root->val);
	}
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);


	return 0;
}