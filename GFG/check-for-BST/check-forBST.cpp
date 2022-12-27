{
    public:
    //Function to check whether a Binary Tree is BST or not.
    bool isBS(Node* root,Node* l=NULL,Node* r=NULL) 
    {
        if(root==NULL) return 1;
        if(l!=NULL && l->data>=root->data) return 0;
        if(r!=NULL && r->data<=root->data) return 0;
        return isBS(root->left,l,root)&& isBS(root->right,root,r);
    }
    bool isBST(Node* root) 
    {
        // Your code here
        bool a= isBS(root,NULL,NULL);
        return a;
    }
};

