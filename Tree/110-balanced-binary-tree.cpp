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
	bool isBalanced(TreeNode* root) {
		if (root == NULL) return true;
		int left = 1 + height(root->left);
		int right = 1 + height(root->right);
		if (abs(left - right) == 1 or abs(left - right) == 0) {
			return isBalanced(root->left) and isBalanced(root->right);
		}
		return false;
	}

private:
	int height(TreeNode* root) {
		if (root == NULL) {
			return 0;
		}

		return max(height(root->left), height(root->right)) + 1;
	}
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);


	return 0;
}