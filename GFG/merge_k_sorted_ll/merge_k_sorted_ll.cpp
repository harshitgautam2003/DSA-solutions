
struct Node
{
	int data;
	Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/ 

class Solution{
  public:
    //Function to merge K sorted linked list.
    Node* mergetwo(Node* a,Node* b)
    {
        if(!a) return b;
        if(!b) return a;
        Node* res = NULL;
        if(a->data < b->data)
        {
            res = a;
            res->next = mergetwo(a->next,b);
        }
        else
        {
            res =b;
            res->next = mergetwo(a,b->next);
        }
        return res;
    }
   
    Node * mergeKLists(Node *arr[], int K)
    {
        for(int i=1; i<K; i++)
            arr[0] = mergetwo(arr[0],arr[i]);
        return arr[0];
    }
};
