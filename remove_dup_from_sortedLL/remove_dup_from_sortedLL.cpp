
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

//Function to remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head){
 // your code goes here
    Node*p=head;
    Node *q=head->next;
    while(q!=NULL){
        if(p->data==q->data){
            Node*temp=q;
            q=q->next;
            p->next=q;
            delete(temp);
        }
        else{
            p=q;
            q=q->next;
        }
    }
    return head;
}