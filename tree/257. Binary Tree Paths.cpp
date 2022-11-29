/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void binaryTreePathsUtil(TreeNode* root, vector<string>& vec, string str)
{
	if (root)
	{
		if (!root->left && !root->right)
		{
			str += to_string(root->val);
			vec.push_back(str);
		}
		str = str + to_string(root->val) + "->";
        
		binaryTreePathsUtil(root->left, vec, str);
		binaryTreePathsUtil(root->right, vec, str);
// 		thoda sa update karle
	}
}

vector<string> binaryTreePaths(TreeNode* root) {
	vector<string> vec;
	string str = "";
	binaryTreePathsUtil(root, vec, str);
	return vec;
}
};
