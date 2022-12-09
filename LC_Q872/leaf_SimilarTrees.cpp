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
    void leafNodes(TreeNode* root,vector<int>&ans){
        if(!root)return ;
        if(root->left==NULL&&root->right==NULL){
            ans.push_back(root->val);
        }
        leafNodes(root->left,ans);
        leafNodes(root->right,ans);
        return ;
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1,v2;
        leafNodes(root1,v1);
        leafNodes(root2,v2);
        if(v1.size()!=v2.size())return false;
        for(int i=0;i<v1.size();i++){
            if(v1[i]!=v2[i])return false;
        }
        return true;
    }
};