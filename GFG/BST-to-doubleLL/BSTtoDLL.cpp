/* Structure for tree and linked list

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

// This function should return head to the DLL
class Solution
{
    public: 
    //Function to convert binary tree to doubly linked list and return it.
    void createNode(Node* root,Node* &head,Node* &tail){
        Node* newNode=new Node;
        newNode->data=root->data;
        newNode->left=NULL;
        newNode->right=NULL;
        if(head==NULL){
            head=newNode;
            tail=head;
        }
        else{
            tail->right=newNode;
            newNode->left=tail;
            tail=newNode;
        }
}
void inorder(Node* root,Node* &head,Node* &tail){
        if(root==NULL)  return;
        inorder(root->left,head,tail);
        createNode(root,head,tail);
        inorder(root->right,head,tail);
}
Node * bToDLL(Node *root)
{
        // your code here
        Node* head=NULL;Node* tail=NULL;
        inorder(root,head,tail);
        return head;
}
};
