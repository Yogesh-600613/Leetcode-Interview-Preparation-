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
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        if(root == nullptr)
        {
            vector<vector<int>> ans;
            ans.clear();
            return ans;
        }
        
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        vector<int> initial;
        initial.push_back(root->val);
        ans.push_back(initial);
        q.push(root);
        
        while(!q.empty())
        {
            
            
            vector<TreeNode*> nodes;
            while(!q.empty())
            {
                nodes.push_back(q.front());
                q.pop();
            }
            
            vector<int> temp;
            for(int t = 0 ; t < nodes.size() ; t++ )
            {
                TreeNode* curr = nodes[t];
                if(curr == nullptr)
                    continue;
            
            
                if(curr->left != nullptr)
                    temp.push_back(curr->left->val);
                if(curr->right != nullptr)
                    temp.push_back(curr->right->val);
            
                // cout<<"For root value "<< curr->val<<" pushed values are ";
                // for(int i : temp)
                    // cout<<i<<" ";
                // cout<<endl;
            
                if(curr->left != nullptr)
                    q.push(curr->left);
                if(curr->right != nullptr)
                    q.push(curr->right);
            }
            
            if(temp.size() != 0)
                    ans.push_back(temp);
            
            
        }
        return ans;
    }
};