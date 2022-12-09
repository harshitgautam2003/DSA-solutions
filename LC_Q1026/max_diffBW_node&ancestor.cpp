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
    int ansfunc(TreeNode*root,int m,int n){
        if(!root)return m-n;
        m=max(m,root->val);
        n=min(n,root->val);
        int x= max(ansfunc(root->left,m,n),ansfunc(root->right,m,n));
        return x;
    }
    int maxAncestorDiff(TreeNode* root) {
        if(!root)return 0;
        return ansfunc(root,root->val,root->val);
    }
};
