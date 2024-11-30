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
    bool isSymmetric(TreeNode* root) 
    {
          
        if(root==NULL)
        {
            return true;
        }
        return solve(root->left,root->right);
    }
    bool solve(TreeNode *x,TreeNode *y)
    {
        if(x==NULL && y==NULL)
        {
            return true;
        }
        else if(x==NULL || y==NULL)
        {
            return false;
        }
        else if(x->val!=y->val)
        {
            return false;

        }
        else
        {
            return solve(x->left,y->right) && solve(x->right,y->left);
        }
        //return true;
    }
};