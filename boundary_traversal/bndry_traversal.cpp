struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution {
public:
    void leaf(Node* root , vector<int> &ans){
        if(root==NULL){
            return;
        }
        if(root->left==NULL && root->right==NULL){
            ans.push_back(root->data);
            return;
        }
        leaf(root->left , ans);
        leaf(root->right , ans);
    }
    vector <int> boundary(Node *root)
    {
        //Your code here
        vector<int> ans;
        Node* temp = root;
        if(temp->left==NULL && temp->right==NULL){
            ans.push_back(temp->data);
            return ans;
        }
        if(temp->left!=NULL){
            while(temp->left!=NULL || temp->right!=NULL){
                ans.push_back(temp->data);
                if(temp->left==NULL){
                    temp=temp->right;
                }
                else{
                    temp=temp->left;
                }
            }
        }
        else{
            ans.push_back(temp->data);
        }
        leaf(root , ans);
        temp=root;
        if(temp->right!=NULL){
            temp=temp->right;
            stack<int> s;
            while(temp->right!=NULL || temp->left!=NULL){
                s.push(temp->data)  ;
                if(temp->right==NULL){
                    temp=temp->left;
                }else{
                    temp=temp->right;
                }
            }
            while(s.empty()==false){
                int x = s.top();
                s.pop();
                ans.push_back(x);
            }
        }
        return ans;
    }
};