  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;
*/

class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        
        // Complete this method
        node*p=NULL;
        node*r=NULL;
        node *q=head;
        int count=1;
        while(q!=NULL&&count<=k){
            r=q->next;
            q->next=p;
            p=q;
            q=r;
            count++;
        }
        if(r!=NULL){
            head->next=reverse(r,k);
        }
        return p;
        
    }
};