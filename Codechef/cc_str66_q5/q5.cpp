#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;
	    cin>>n;int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int l=0;int h=n-1;int ans=0;
	   while(l<h){
	       if(a[l]==a[h]){
	           l++;
	           h--;
	       }
	       else if(a[h]>a[l]){
	           a[h]-=a[l];
	           l++;ans++;
	       }
	       else {
	           a[l]-=a[h];
	           h--;ans++;
	       }
	   }
	   cout<<ans<<endl;
	}
	return 0;
}
