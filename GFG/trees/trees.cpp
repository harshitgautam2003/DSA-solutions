

#include<stdio.h>
#include<stdlib.h>
struct Node{
	struct Node *lchild;
	struct Node *rchild;
	int data;
};

struct Queue{
	int front;
	int rear;
	int size;
	Node **Q;
};

void createQueue(struct Queue *q,int size){
	q->size=size;
	q->front=q->rear=0;
	q->Q=(Node **)malloc(sizeof(Node *)*q->size);
	
}
void enqueue(struct Queue *q,Node *x){
	if((q->rear==q->size-1&&q->front==0)||q->front==q->rear+1){
		printf("Queue is full.\n");
	}
	else{
		q->rear=(q->rear+1)%q->size;
		q->Q[q->rear]=x;
	}
}

Node * dequeue(struct Queue *q){
	Node *x=NULL;
	if(q->front==q->rear){
		printf("Queue is Empty.\n");
	}
	else{
		q->front=(q->front+1)%q->size;
		x=q->Q[q->front];
	}
	return x;
}

int isEmpty(struct Queue q){
	return q.front==q.rear;
}
struct Node *root=NULL;

void createTree(){
	struct Node *p,*t;
	int x;
	Queue q;
	createQueue(&q,100);
	printf("Enter the root value:\n");
	scanf("%d",&x);
	root=(Node *)malloc(sizeof(Node *));
	root->data=x;
	root->lchild=root->rchild=NULL;
	enqueue(&q,root);
	while(!isEmpty(q)){
		p=dequeue(&q);
		
		printf("Enter the left child of %d the node:\n",p->data);
		scanf("%d",&x);
		if(x!=-1){
			t=(Node*)malloc(sizeof(Node*));
			t->data=x;
			t->lchild=t->rchild=NULL;
			p->lchild=t;
			enqueue(&q,t);
		}
		
		printf("Enter the right child of %d :\n",p->data);
		scanf("%d",&x);
		if(x!=-1){
			t=(Node*)malloc(sizeof(Node*));
			t->data=x;
			t->lchild=t->rchild=NULL;
			p->rchild=t;
			enqueue(&q,t);
		}
	}
}

void preorder(Node *r){
	if(r){
		printf("%d\n",r->data);
		preorder(r->lchild);
		preorder(r->rchild);
	}
}

void inorder(Node *r){
	if(r){
		inorder(r->lchild);
		printf("%d\n",r->data);
		inorder(r->rchild);
	}
}
void postorder(Node *r){
	if(r){
		postorder(r->lchild);
		postorder(r->rchild);
		printf("%d\n",r->data);
	}
}

void levelorder(Node *r){
	static int z=1;
	if (z==1)
	printf("%d\n",r->data);
	z=2;
	if(r){
		if(r->lchild)
		printf("%d\n",r->lchild->data);
		if(r->rchild)
		printf("%d\n",r->rchild->data);
		levelorder(r->lchild);
		levelorder(r->rchild);
	}
}
int countNode(Node*head){
	Node*p=head;
	if(p!=NULL){
		return countNode(head->lchild)+countNode(head->rchild)+1;
	}
	return 0;
}

int countleafNode(Node *root){
	Node*p=root;
	int x,y;
	if(p!=NULL){
		x=countleafNode(p->lchild);
		y=countleafNode(p->rchild);
		if(p->lchild==NULL&&p->rchild==NULL){
			return x+y+1;
		}
		else return x+y;
	}
	return 0;
}
int countNodedeg2(Node*root){
	Node*p=root;
	int x,y;
	if(p!=NULL){
		x=countNodedeg2(p->lchild);
		y=countNodedeg2(p->rchild);
		if(p->lchild&&p->rchild){
			return x+y+1;
		}
		else return x+y;
	}
	return 0;
}
int sumOfTree(Node*root){
	Node*p=root;
	int x,y;
	if(p!=NULL){
		x=sumOfTree(p->lchild);
		y=sumOfTree(p->rchild);
		
		return x+y+p->data;
	}
	return 0;
}

int heightOfTree(Node*root){
	Node*p=root;
	int x,y;
	if(p!=NULL){
		x=heightOfTree(p->lchild);
		y=heightOfTree(p->rchild);
		if(x>y){
			return x+1;
		}
		else return y+1;
	}
	return 0;
} 
int position(int arr[],int start,int end,int key){
	for(int i=start;i<=end;i++){
		if(arr[i]==key) return i;
	}
	return -1;
}
Node * treefromtransversal(int preorder[],int inorder[],int start,int end){
	if(start>end){
		return NULL;
	}
	static int i=0;
	Node *nnode=(Node*)malloc(sizeof(Node));
	nnode->data=preorder[i++];
	
	if(start==end) return nnode;
	
	int pos=position(inorder,start,end,nnode->data);
	nnode->lchild=treefromtransversal(preorder,inorder,start,pos-1);
	nnode->rchild=treefromtransversal(preorder,inorder,pos+1,end);
	
	return nnode;	
}

int main(){
	createTree(); 
	printf("Preorder\n");
	preorder(root);
	
	printf("Inorder\n");
	inorder(root);
	
	printf("Postorder\n");
	postorder(root);
	
	printf("Levelorder\n");
	levelorder(root);

	
	return 0;
}
