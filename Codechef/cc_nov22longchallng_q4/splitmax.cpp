#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int t;cin>>t;
	while(t--){
	    long long int n;
	    cin>>n;
	    long long int ans=0;
	    for (int i = 0; i < n; i++) {
	       long long int a;cin>>a;
	       ans+=a;
	       ans%= 998244353;

	    }
	    ans=ans*(ans-1);
	    ans%= 998244353;
	    cout<<ans<<endl;
	}
	return 0;
}
