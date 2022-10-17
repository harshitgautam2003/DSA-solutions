

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


   
class Solution
{
    public:
    void preOrder(Node*r, vector<int> &temp)

    {

        if(r==NULL)

            return;

        temp.push_back(r->data);

        preOrder(r->left,temp);

        preOrder(r->right,temp);

    }

    bool isIdentical(Node *r1, Node *r2)

    {

        vector<int> temp1,temp2;

        preOrder(r1,temp1);

        preOrder(r2,temp2);

        if(temp1==temp2)

            return true;

        return false;  
    }
};