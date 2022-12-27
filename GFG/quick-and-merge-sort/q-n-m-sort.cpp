#include <stdio.h>
#include<stdlib.h>

void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}
int partition(int A[],int l,int h){
	int pivot=A[l];
	int i=l,j=h;
	 
	do{
		do{i++;}while(A[i]<=pivot);
		do{j--;}while(A[j]>pivot);
		 
		if(i<j)swap(&A[i],&A[j]);
		}while(i<j);
		 
		swap(&A[l],&A[j]);
		return j;
	}
void QuickSort(int *A,int l,int h)
{
	int j;
	 
	if(l<h){
	 	j=partition(A,l,h);
	 	QuickSort(A,l,j);
	 	QuickSort(A,j+1,h);
	}
}
void Merge(int A[],int l,int mid,int h)
{
	int i=l,j=mid+1,k=l;
	int B[100];
	 
	while(i<=mid && j<=h){
	 	if(A[i]<A[j])
	 		B[k++]=A[i++];
	 	else
	 		B[k++]=A[j++];
	 	}
	for(;i<=mid;i++)
	 	B[k++]=A[i];
	for(;j<=h;j++)
	 	B[k++]=A[j];
	 
	for(i=l;i<=h;i++)
		 A[i]=B[i];
}
void MergeSort(int A[],int l,int h)
{
	int mid;
	if(l<h){
		mid=(l+h)/2;
	 	MergeSort(A,l,mid);
	 	MergeSort(A,mid+1,h);
	 	Merge(A,l,mid,h); 
	}
}

int main(){
	

	int flag=0;
	while(flag!=1){
	
		printf("Enter 1. for Quick sort Enter 2. for Merge sort Enter 3. to Exit the program\n");
		int choice;scanf("%d",&choice);
		switch(choice){
			case 1:{
			
				int n;printf("Enter the size of the array.\n");
				scanf("%d",&n);
				int array1[n];
				printf("Enter the elements of the array.\n");
				for(int i=0;i<n;i++){
					scanf("%d",&array1[i]);
				}
				QuickSort(array1,0,n);
				for(int i=0;i<n;i++){
					printf("%d ",array1[i]);
				}
				printf("\n");
				break;
			}
			case 2:{
				
				int n1;printf("Enter the size of the array.\n");
				scanf("%d",&n1);
				int array2[n1];
				printf("Enter the elements of the array.\n");
				for(int i=0;i<n1;i++){
					scanf("%d",&array2[i]);
				}
				MergeSort(array2,0,n1);
				for(int i=0;i<n1;i++){
					printf("%d ",array2[i]);
				}
				printf("\n");
				break;
			}
			case 3:
				flag=1;
				break;
			}
	}
	return 0;
}