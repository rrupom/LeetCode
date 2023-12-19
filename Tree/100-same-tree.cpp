#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	bool isSymmetric(TreeNode* root) {
		vector<int> left;
		vector<int>right;

		leftTree(root, left);
		rightTree(root, right);

		for (int i = 0; i < left.size(); i++) {
			if (left[i] != right[i]) return false;
		}

		return true;
	}
private:
	void leftTree(TreeNode* root, vector<int> &left) {
		if (root == NULL) {
			left.push_back(-1);
			return;
		}
		left.push_back(root->val);
		leftTree(root->left, left);
		leftTree(root->right, left);
	}

	void rightTree(TreeNode* root, vector<int> &right) {
		if (root == NULL) {
			right.push_back(-1);
			return;
		}
		right.push_back(root->val);
		rightTree(root->right, right);
		rightTree(root->left, right);
	}
};

class Solution {
public:
	bool isSameTree(TreeNode* p, TreeNode* q) {
		if (p == NULL and q == NULL) {
			return true;
		}
		if (p == NULL and q != NULL) return false;
		if (p != NULL and q == NULL) return false;
		if (p->val != q->val) {
			return false;
		}

		bool left = isSameTree(p->left, q->left);
		bool right = isSameTree(p->right, q->right);

		if (left and right) return true;
		return false;

	}
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);


	return 0;
}