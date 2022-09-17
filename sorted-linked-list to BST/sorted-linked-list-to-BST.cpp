//User function Template for C++


//User function Template for C++

/* 
//Linked List
struct LNode
{
    int data;
    struct LNode* next;
    
    LNode(int x){
        data = x;
        next = NULL;
    }
};

//Tree
struct TNode  
{  
    
    int data;  
    struct TNode* left;  
    struct TNode* right; 
    TNode(int x)
    {
        data=x;
        left=right=NULL;
    }
}; */
class Solution{
    
    TNode* bst(int v[], int s, int e){
        
        if(s>e)
        return NULL;
        int mid = (s+e+1)/2;
        TNode* temp = new TNode(v[mid]);
        temp->left = bst(v,s,mid-1);
        temp->right = bst(v,mid+1,e);
        
        return temp;
    }
    
    
    
  public:
    TNode* sortedListToBST(LNode *head) {
        //code here
        
        if(head==NULL)
        return NULL;
        
        int i=0;
        int count =0;
        int v[2000000] ;
        
        while(head){
            v[i]=head->data;
            head = head->next;
            count++;
            i++;
        }
        
        int s =0;
        int e = count-1;
        
        return bst(v,s,e);
    }
};