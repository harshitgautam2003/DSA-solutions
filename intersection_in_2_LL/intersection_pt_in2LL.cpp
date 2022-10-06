
/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

//Function to find intersection point in Y shaped Linked Lists.
// void reverse(struct Node** head_ref)
// {
//     struct Node* prev = NULL;
//     struct Node* current = *head_ref;
//     struct Node* next = NULL;
//     while (current != NULL) {
//         // Store next
//         next = current->next;
 
//         // Reverse current node's pointer
//         current->next = prev;
 
//         // Move pointers one position ahead.
//         prev = current;
//         current = next;
//     }
//     *head_ref = prev;
// }
// int intersectPoint(Node* head1, Node* head2)
// {
//     // Your Code Here
//     reverse(&head1);
//     reverse(&head2);
//     Node*p=head1;
//     Node*q=head2;
//     // while(p->next->data==q->next->data){
//     //     p=p->next;
//     //     q=q->next;
//     // }
//     return head2->data;
    
    int intersectPoint(Node* head1, Node* head2){

    Node *temp1 = head1;
    Node *temp2 = head2;
    
    while(temp1 != temp2) {
        if(temp1 == NULL) {
            temp1 = head2;
        } else {
            temp1 = temp1 ->next;
        }
        
         if(temp2 == NULL) {
            temp2 = head1;
        } else {
            temp2 = temp2 ->next;
        }
    }
    
    return temp1->data;
}
    
