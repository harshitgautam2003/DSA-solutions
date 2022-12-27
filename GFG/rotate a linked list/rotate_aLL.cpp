
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};




class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // Your code here
        Node*p=head;Node*q=head;
        while(p->next!=NULL){
            p=p->next;
        }
        while(k>1){
            q=q->next;
            k--;
        }
        p->next=head;
        head=q->next;
        q->next=NULL;
        return head;
    }
};
    