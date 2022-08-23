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
    vector<int> ans;
//     we initated ans 
    // and/÷ than started with trenoide
    // that if false ndoe than return if notthat pushback to the node and preorderto left and than right according
    void preorder(TreeNode* node)
    {
        if(!node) return;
        ans.push_back(node->val);
        preorder(node->left);
            preorder(node->right);
        
    }
    vector<int> preorderTraversal(TreeNode* root) {
        preorder(root);
        return ans;
        
    }
};
