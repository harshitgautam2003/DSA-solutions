/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    Node* reverse_list(Node*head){
  if(head->next==NULL || head==NULL)
    {
        return head;
    }
    Node*temp=head->next;
    Node*b=temp;
    head->next=NULL;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        b->next=head;
        head=b;
        b=temp;
    }
    temp->next=head;
    return temp;
}
    bool isPalindrome(Node *head)
    { int l=0;
      Node*temp=head;
      while(temp!=NULL)
      {
          l++;
          temp=temp->next;
      }
         if(l==1 || l==0)
    {
        return true;
    }
    l=l/2;
    temp=head;
    while(l>1)
    {
        temp=temp->next;
        l--;
    }
    Node*h2=temp->next;
    temp->next=NULL;
    h2 = reverse_list(h2);
    while(head!=NULL)
    {
        if(head->data!=h2->data)
        {
            return 0;
        }
        head=head->next;
        h2=h2->next;
    }
    return 1;
    }
};
