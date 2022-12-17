
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    int a[n];int min=INT_MAX;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        if(a[i]<min){
	            min=a[i];
	        }
	    }
	    int count=0;
	    int z=0;
	    for(int i=0;i<n;i++){
	            if(a[i]!=min){
	               if(a[i]%min==0) count++;
	               
	               else{ 
	                   z=1;
	                   break;
	               }
	            }
	        }
	        if(z)cout<<n<<endl;
	        else cout<<count<<endl;
	}
	return 0;
}
