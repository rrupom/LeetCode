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
	int minDepth(TreeNode* root) {
		if (root == NULL) {
			// this is leaf node
			return 0;
		} else if (root->left == NULL and root->right != NULL) {
			// it is right sub tree
			return minDepth(root->right) + 1;
		} else if (root->left != NULL and root->right == NULL) {
			// this is left subtree
			return minDepth(root->left) + 1;
		} else {
			// tree has both left and right node
			return min(minDepth(root->left), minDepth(root->right)) + 1;
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