#include<stdio.h>
#include<cstdlib>

struct queue{
	int front=0;
	int rear=0;
	int n;
	int *arr;
	
};
int isFull(queue *q){
	if((q->rear+1)%q->n==q->front) return 1;
	else return 0; 
}
int isEmpty(queue *q){
	if(q->front==q->rear) return 1;
	else return 0; 	
}

void enqueue(queue *q,int x){
	if(isFull(q)) printf("Cant insert the element,Queue is Full\n");
	else{
		q->rear=(q->rear+1)%q->n;
		q->arr[q->rear]=x;
		if(q->front==0) q->front++;
	}
}

int dequeue(queue *q){
	int x=-1;
	if(isEmpty(q)) printf("Can't dequeue, Queue is empty\n");
	else{
		q->front=(q->front+1)%q->n;
		x=q->arr[q->front];
	}
	return x;
}
void display(queue*q){
	int i=q->front;
	do{
		printf("%d ",q->arr[i]);
		i=(i+1)%q->n;
	}while(i!=(q->rear+1)%q->n);
	printf("\n");
}
void displayFront(queue q){
	printf("%d\n",q.arr[q.front]);
}
void displayRear(queue q){
	printf("%d\n",q.arr[q.rear]);
}


int main(){
	queue q1;
	printf("Enter size of the circular queue\n");
	scanf("%d",&q1.n);
	q1.arr= (int *)malloc(sizeof(int)*q1.n);
	int flag=0;
	while(flag!=1){
		printf("Enter 1. for Enqueue Enter 2. for Dequeue Enter 3. for Display Enter 4. to Display front Enter 5. to Display rear Enter 6. for Exit\n");
		int choice;scanf("%d",&choice);
		switch(choice){
		
			case 1:
				printf("Enter the number to be enqueued\n");
				int num;scanf("%d",&num);
				enqueue(&q1,num);
				break;
			
			case 2:
				dequeue(&q1);
				break;
				
			case 3:
				display(&q1);
				break;
			case 4:
				displayFront(q1);
				break;
			case 5:
				displayRear(q1);
				break;
			case 6:
				flag=1;
				printf("Program Exited\n");
				break;
			default:
				printf("Enter a valid choice\n");
		}
		
	}
	return 0;
}
	