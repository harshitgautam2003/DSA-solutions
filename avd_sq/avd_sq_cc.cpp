#include <iostream>
#include<math.h>
using namespace std;

void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    int arr[n];
	    int j=1;
	    arr[0]=1;
	    for(int i=2;i<=n;i++){
	        arr[j]=i;
	        double d=sqrt(arr[j]*arr[j-1]);
	        int z=d;
	        if(z==d)swap(&arr[0],&arr[j]);
	        j++;
	    }
	    for(int i=0;i<n;i++){
	        cout<<arr[i]<<" ";
	    }
	    cout<<endl;
	}
	
	return 0;
}
