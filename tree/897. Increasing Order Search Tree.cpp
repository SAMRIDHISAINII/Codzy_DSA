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
   
         TreeNode* increasingBST(TreeNode* root) {
        return increasingBSTHelper(root, nullptr);
    }

private:
    TreeNode* increasingBSTHelper(TreeNode* root, TreeNode* tail) {
        if (!root) {
            return tail;
        }
        auto result = increasingBSTHelper(root->left, root);
        root->left = nullptr;
        root->right = increasingBSTHelper(root->right, tail);
        return result;
    }
};
