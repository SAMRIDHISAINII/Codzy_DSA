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
    bool hasPathSum(TreeNode* root, int sum) {
//         we are given the root of a binary tree and interger targetsyn which return true 
//         if has root to left path such thst adding upp all the vlure along the equald targetsun
        
//         hence as we kniw leaf is a node having no chuldren
//         we need to optimze in order to get the optimmal solution 
        
        if(root==NULL)
        {
            return false;
        }
        
       
        int val = sum - root->val;
        
          if ( val == 0 && root->left == NULL && root->right == NULL) {
            return true;
        }
      
        else
        {
            return hasPathSum(root->left, val) || hasPathSum(root->right, val);
        }
        return false;
        
    }
};
