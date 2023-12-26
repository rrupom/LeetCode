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
	TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
		TreeNode* root = helper(nums, 0, nums.size() - 1);
		return root;
	}
	TreeNode* helper(vector<int> v, int low, int high) {
		if (high < low) return NULL;
		int index = low;
		for (int i = low + 1; i <= high; i++) {
			if (v[i] > v[index]) {
				index = i;
			}
		}
		TreeNode* root = new TreeNode(v[index]);
		root->left = helper(v, low, index - 1);
		root->right = helper(v, index + 1, high);

		return root;
	}
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);


	return 0;
}