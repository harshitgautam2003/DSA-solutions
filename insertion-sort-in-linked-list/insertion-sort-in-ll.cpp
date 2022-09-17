//User function Template for C++

/*Link list node
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};*/

class Solution
{
    public:
    Node* insertionSort(struct Node* head_ref)
    {
        //code here
        Node*p=head_ref;
        Node*sorted=NULL;
        
        while(p!=NULL){
            Node*q=(Node*)malloc(sizeof(Node));
            q->data=p->data;
            Node*r=NULL;
            if(sorted==NULL||sorted->data>=q->data){
                q->next=sorted;
                sorted=q;
            }
            else{
                r=sorted;
                while(r->next!=NULL&&(r->next->data<q->data)){
                    r=r->next;
                }
                q->next=r->next;
                r->next=q;
            }
            p=p->next;
        }
        return sorted;
    }
    
};