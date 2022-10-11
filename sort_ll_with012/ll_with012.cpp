 
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
    public:
 
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        Node *p=head;
        int arr[3]={0,0,0};
        int count=1;
        while(p!=NULL){
            arr[p->data]++;
            count++;
            p=p->next;
        }
        p=head;
        while(p!=NULL){
            if(arr[0]!=0){
                p->data=0;
                arr[0]--;
            }
            else if(arr[1]!=0){
                p->data=1;
                arr[1]--;
            }
            else if(arr[2]!=0){
                p->data=2;
                arr[2]--;
            }
            p=p->next;
        }
        return head;
    }
};