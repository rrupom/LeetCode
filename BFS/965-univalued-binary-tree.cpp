/**
 Probelm Link : https://leetcode.com/problems/univalued-binary-tree/
 Author : Rakib Talukder Rupom
 Language : C++
 Platform : LeetCode
**/

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
	bool isUnivalTree(TreeNode* root) {
		queue<TreeNode*> q;

		if (root == NULL) {
			return false;
		}

		q.push(root);
		vector<int> nodes;

		while (!q.empty()) {
			TreeNode* cur = q.front();
			q.pop();
			nodes.push_back(cur->val);
			if (cur->left != NULL) {
				q.push(cur->left);
			}
			if (cur->right != NULL) {
				q.push(cur->right);
			}
		}

		int val = root->val;

		for (int i = 0; i < nodes.size(); i++) {
			if (nodes[i] != val) return false;
		}

		return true;
	}
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);


	return 0;
}