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
    bool isSymmetric(TreeNode* root) {
//         iterative  solution
//         base solution
        
        // /optimize way
        
        if(!root)
        {
            return true;
        }
        
        stack<TreeNode *> nodes;
        
        nodes.emplace(root->left);
        nodes.emplace(root->right);
        
         while (!nodes.empty())  {
            auto right = nodes.top();
            nodes.pop();
            auto left = nodes.top();
            nodes.pop();
            if (!left && !right) {
                continue;
            }
            if (!left || !right || left->val != right->val) {
                return false;
            }
//             we can do it in reusive way also
            nodes.emplace(left->right);
            nodes.emplace(right->left);

             
            nodes.emplace(left->left);
            nodes.emplace(right->right);
        }
        return true;
    }
};
