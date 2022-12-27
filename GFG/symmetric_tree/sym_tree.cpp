
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class Solution{
    public:
     bool findSymmetric(Node* l, Node* r){
        if(l == NULL && r == NULL){
            return true;
        }
        if(l == NULL || r == NULL){
            return false;
        }
        if(l->data != r->data){
            return false;
        }
        return findSymmetric(l->left, r->right) && findSymmetric(l->right, r->left);
    }
    bool isSymmetric(struct Node* root)
    {
	    if(root == NULL){
	        return true;
	    }
	    return findSymmetric(root->left, root->right);
    }
};