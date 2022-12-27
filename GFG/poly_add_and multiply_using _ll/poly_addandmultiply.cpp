
#include <stdio.h>
#include <stdlib.h>
using namespace std;


struct Node {
	int coeff;
	int pow;
	struct Node* next;
};



void polyadd(struct Node* poly1, struct Node* poly2,
			struct Node* poly)
{
	while (poly1->next && poly2->next) {

		if (poly1->pow > poly2->pow) {
			poly->pow = poly1->pow;
			poly->coeff = poly1->coeff;
			poly1 = poly1->next;
		}

		else if (poly1->pow < poly2->pow) {
			poly->pow = poly2->pow;
			poly->coeff = poly2->coeff;
			poly2 = poly2->next;
		}

		else {
			poly->pow = poly1->pow;
			poly->coeff = poly1->coeff + poly2->coeff;
			poly1 = poly1->next;
			poly2 = poly2->next;
		}

		poly->next
			= (struct Node*)malloc(sizeof(struct Node));
		poly = poly->next;
		poly->next = NULL;
	}
	while (poly1->next || poly2->next) {
		if (poly1->next) {
			poly->pow = poly1->pow;
			poly->coeff = poly1->coeff;
			poly1 = poly1->next;
		}
		if (poly2->next) {
			poly->pow = poly2->pow;
			poly->coeff = poly2->coeff;
			poly2 = poly2->next;
		}
		poly->next
			= (struct Node*)malloc(sizeof(struct Node));
		poly = poly->next;
		poly->next = NULL;
	}
}


Node* addnode(Node* start, int coeff, int pow)
{
    Node* newnode =  (Node*)malloc(sizeof(Node));
    newnode->coeff = coeff;
    newnode->pow = pow;
    newnode->next = NULL;
  
    if (start == NULL)
        return newnode;
  
    Node* ptr = start;
    while (ptr->next != NULL)
        ptr = ptr->next;
    ptr->next = newnode;
  
    return start;
}
  
  
void removeDuplicates(Node* start)
{
    Node *ptr1, *ptr2, *dup;
    ptr1 = start;
  
    while (ptr1 != NULL && ptr1->next != NULL) {
        ptr2 = ptr1;
  
        while (ptr2->next != NULL) {
  
            if (ptr1->pow == ptr2->next->pow) {
  
                ptr1->coeff = ptr1->coeff + ptr2->next->coeff;
                dup = ptr2->next;
                ptr2->next = ptr2->next->next;
  
                delete (dup);
            }
            else
                ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
}
Node* multiply(Node* poly1, Node* poly2,Node* poly3){
  
    Node *ptr1, *ptr2;
    ptr1 = poly1;
    ptr2 = poly2;
    while (ptr1 != NULL) {
        while (ptr2 != NULL) {
            int coeff, power;
  
            coeff = ptr1->coeff * ptr2->coeff;
  
            power = ptr1->pow + ptr2->pow;
  
            poly3 = addnode(poly3, coeff, power);
  
            ptr2 = ptr2->next;
        }
  
        ptr2 = poly2;
  
        ptr1 = ptr1->next;
    }
    removeDuplicates(poly3);
    return poly3;
}
void printList(struct Node* ptr)
{
    while (ptr->next != NULL) {
        printf("%dx^%d",ptr->coeff,ptr->pow);
       if( ptr->next!=NULL && ptr->next->coeff >=0)
          printf("+");
  
        ptr = ptr->next;
    }
    printf("%d\n",ptr->coeff);
}
int main()
{
	struct Node *poly1 = NULL, *poly2 = NULL, *poly = NULL;
	poly = (struct Node*)malloc(sizeof(struct Node));

	int flag=1;
	int choice,terms,coeff,pow;
	
	poly = (struct Node*)malloc(sizeof(struct Node));
	while(flag==1){
		printf("Enter 1.for Additon 2.for Multiplication\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter the no. of terms in 1st polynomial\n");
				scanf("%d",&terms);
				while(terms--){
					printf("Enter Co-efficient of term %d\n",terms+1);
					scanf("%d",&coeff);
					printf("Enter power of term %d\n",terms+1);
					scanf("%d",&pow);
					poly1=addnode(poly1,coeff,pow);
				}
				printf("Enter the no. of terms in 2nd polynomial\n");
				scanf("%d",&terms);
				while(terms--){
					printf("Enter Co-efficient of term %d\n",terms+1);
					scanf("%d",&coeff);
					printf("Enter power of term %d\n",terms+1);
					scanf("%d",&pow);
					poly2=addnode(poly2,coeff,pow);
				}
				printf("First polynomial:");
				printList(poly1);
				printf("\n");
				printf("Second polynomial:");
				printList(poly2);
				printf("\n");
				printf("\nAdded polynomial: ");
				polyadd(poly1, poly2, poly);
				printList(poly);
				printf("\n");
				break;
			
			case 2:
				printf("Enter the no. of terms in 1st polynomial\n");
				scanf("%d",&terms);
				while(terms--){
					printf("Enter Co-efficient of term %d\n",terms+1);
					scanf("%d",&coeff);
					printf("Enter power of term %d\n",terms+1);
					scanf("%d",&pow);
					poly1=addnode(poly1,coeff,pow);
				}
				printf("Enter the no. of terms in 2nd polynomial\n");
				scanf("%d",&terms);
				while(terms--){
					printf("Enter Co-efficient of term %d\n",terms+1);
					scanf("%d",&coeff);
					printf("Enter power of term %d\n",terms+1);
					scanf("%d",&pow);
					poly2=addnode(poly2,coeff,pow);
				}
				printf("First polynomial:");
				printList(poly1);
				printf("\n");
				printf("Second polynomial:");
				printList(poly2);
				printf("\n");
				printf("\nMultiplied polynomial: ");
				poly=multiply(poly1,poly2,poly);
				printList(poly);
				printf("\n");
				break;
				
			case 3:
				flag=0;
				printf("Program Exited!!\n");
				break;			
		}
	
	}
	return 0;
}
