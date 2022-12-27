
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution{
    public:
     int heightofTree(Node *root){
        if(root==NULL) return 0;
        else return (1+max(heightofTree(root->left),heightofTree(root->right)));
    }

    bool isBalanced(Node *root){
        //  Your Code here
        if(root==NULL) return true;
        int l=heightofTree(root->left);
        int r=heightofTree(root->right);
        
        if (abs(r-l)<=1 && isBalanced(root->left) && isBalanced(root->right)) return true;
        return false;

        

    }
};