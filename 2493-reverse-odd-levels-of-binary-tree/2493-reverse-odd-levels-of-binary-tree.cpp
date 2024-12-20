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
    void func(TreeNode* n1,TreeNode* n2,int level)
    {
        if(n1==NULL || n2==NULL)
        {
            return;
        }
        if(level%2==0)
        {
            int v=n1->val;
            n1->val=n2->val;
            n2->val=v;
        }
        func(n1->left,n2->right,level+1);
        func(n1->right,n2->left,level+1);
    }
    TreeNode* reverseOddLevels(TreeNode* root) 
    {
        func(root->left,root->right,0);
        return root;    
    }
};