   and a pointer to right child
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
}; */

class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
   void inordertraversal(Node* root, vector<int> &ans){
        if(root == NULL){
         return;
        }
         inordertraversal(root->left , ans);
         ans.push_back(root -> data);
         inordertraversal(root -> right,ans);        
    }
    vector<int> inOrder(Node* root) {
        vector<int> ans;
        inordertraversal(root,ans);
         return ans;

    }
};