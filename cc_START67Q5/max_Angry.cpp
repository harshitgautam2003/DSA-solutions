#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    long long int n,b;
	    cin>>n>>b;
	    long long int ans1=((n-1)*n)/2;
	    if(b<n/2){
	        long long int s1=n-2*b;
	        ans1-=(s1*(s1-1))/2;
	    }
	    cout<<ans1<<endl;
    }
	return 0;
}
