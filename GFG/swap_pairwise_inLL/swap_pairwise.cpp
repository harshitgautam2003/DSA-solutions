  Pairwise swap a linked list
  The input list will have at least one element
  node is defined as

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
    Node* pairWiseSwap(struct Node* head) 
    {
        // The task is to complete this method
        if(head == NULL || head->next == NULL)
        return head;
        
        Node* temp = head->next->next;
        Node* first = head->next;
        Node* second = head;
        
        head = first;
        head->next = second;
        head->next->next = pairWiseSwap(temp);
        
        return head;
    }
};