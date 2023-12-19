#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<int> inorderTraversal(TreeNode* root) {
		vector<int> nodes;
		inorderHelper(root, nodes);

		return nodes;
	}
private:

	void inorderHelper(TreeNode* root, vector<int> &nodes) {
		if (root == NULL) {
			return;
		}
		inorderHelper(root->left, nodes);
		nodes.push_back(root->val);
		inorderHelper(root->right, nodes);
	}
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);


	return 0;
}