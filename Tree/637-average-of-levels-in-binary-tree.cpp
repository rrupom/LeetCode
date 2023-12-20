/**
 Probelm Link : https://leetcode.com/problems/average-of-levels-in-binary-tree/
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
	vector<double> averageOfLevels(TreeNode* root) {
		vector<double> ans;
		queue<TreeNode*> q;
		stack<TreeNode*> st;
		q.push(root);

		while (!q.empty()) {
			// remove all the nodes in the current queue and store it back in stack
			while (!q.empty()) {
				st.push(q.front());
				q.pop();
			}

			// calculing sum
			double sum = 0;
			int numOfElement = 0;
			while (!st.empty()) {
				TreeNode* temp = st.top();
				st.pop();
				sum += temp->val;
				++numOfElement;
				if (temp->right != NULL) q.push(temp->right);
				if (temp->left != NULL) q.push(temp->left);
			}
			ans.push_back(sum / numOfElement);

		}

		return ans;
	}
};

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);


	return 0;
}