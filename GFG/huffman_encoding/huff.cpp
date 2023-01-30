class node{
    public:
    node* left;
    int data;
    node*right;
    
    node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};
class cmp{
    public:
    bool operator()(node*a,node*b){
        return a->data > b->data;
    }
};


class Solution
{
	public:
	    void traverse(node*root,vector<string>& ans,string tmp){
	        if(root->left==NULL && root->right==NULL){
	            ans.push_back(tmp);
	            return;
	        }
	        traverse(root->left,ans,tmp+'0');
	        traverse(root->right,ans,tmp+'1');
	    }
	    
		vector<string> huffmanCodes(string S,vector<int> f,int N)
		{
		    // Code here
		    priority_queue<node*,vector<node*>,cmp> pq;
		    for(int i=0;i<N;i++){
		        node*t=new node(f[i]);
		        pq.push(t);
		    }
		    while(pq.size()>1){
		        node*left=pq.top();
		        pq.pop();
		        node*right=pq.top();
		        pq.pop();
		        
		        node*t=new node(left->data+right->data);
		        t->left=left;
		        t->right=right;
		        pq.push(t);
		    }
		    node*root=pq.top();
		    string tmp="";
		    vector<string>ans;
		    traverse(root,ans,tmp);
		    return ans;
		}
};