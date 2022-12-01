#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n,x,y,a,b;
	    cin>>n>>x>>y>>a>>b;
	    int ans1;int ans2=min(min(a,n+1-a),min(n+1-b,b));
	    ans1=abs(x-a)+abs(y-b);
	    int min1=min(min(x,n+1-x),min(n+1-y,y));
	    ans2+=min1;
	    
	    cout<<min(ans1,ans2)<<endl;
	}
	return 0;
}
