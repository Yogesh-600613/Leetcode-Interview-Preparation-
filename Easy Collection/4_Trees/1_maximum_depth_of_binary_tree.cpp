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
    
    int dfs(TreeNode* root, int d)
    {
        // cout<<"At root value "<<root->val<<"  current depth is "<<d<<endl;;
        if(root == nullptr)
            return d;
        if(root-> left == nullptr && root->right == nullptr)
            return d;
        
        int ld = dfs(root->left,d+1);
        int rd = dfs(root->right,d+1);
        
        return max(ld,rd);
        
            
    }
    
    
    
    int maxDepth(TreeNode* root) 
    {
        if(root == nullptr)
            return 0;
        return dfs(root,1);
    }
};