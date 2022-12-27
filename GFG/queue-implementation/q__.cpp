#include<stdio.h>
#include<cstdlib>

struct queue{
	int front=0;
	int rear=-1;
	int n;
	int *arr;
	
};
int isFull(queue *q){
	if(q->rear==q->n-1) return 1;
	else return 0; 
}
int isEmpty(queue *q){
	if(q->front>q->rear) return 1;
	else return 0; 	
}

void enqueue(queue *q,int n){
	if(isFull(q)) printf("Cant insert the element,Queue is Full\n");
	else{
		q->rear++;
		q->arr[q->rear]=n;
	}
}

int dequeue(queue *q){
	int x;
	if(isEmpty(q)) printf("Can't dequeue, Queue is empty\n");
	else{
		x=q->arr[q->front];
		q->front++;
	}
	return x;
}
void display(queue*q){
	for(int i=q->front;i<=q->rear;i++){
		printf("%d ",q->arr[i]);
	}
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
	printf("Enter size of the queue\n");
	scanf("%d",&q1.n);
	q1.arr= (int *)malloc(sizeof(int)*q1.n);
	int flag=0;
	while(flag!=1){
		printf("Enter 1. for Enqueue \nEnter 2. for Dequeue \nEnter 3. for Display \nEnter 4. to Display front \nEnter 5. to Display rear \nEnter 6. for Exit\n");
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
	