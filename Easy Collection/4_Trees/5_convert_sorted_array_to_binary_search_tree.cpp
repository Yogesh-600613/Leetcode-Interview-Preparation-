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
public:                             // Iska sample test case galat diya hua hai
    
    
    TreeNode* helper(vector<int> &v, int low, int high)
    {
        if(low>high)
            return NULL;
        
        int mid = low + ((high-low)/2);
        TreeNode* root = new TreeNode(v[mid]);
        
        root->left = helper(v,low,mid-1);
        root->right = helper(v,mid+1,high);
        
        return root;
    }
    
    
    TreeNode* sortedArrayToBST(vector<int>& nums) 
    {
        return helper(nums,0,nums.size()-1);
    }
};