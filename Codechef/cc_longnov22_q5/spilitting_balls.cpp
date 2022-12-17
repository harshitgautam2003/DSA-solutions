#include <iostream>
#include<math.h>
using namespace std;
long long int M=1000000007;
long long int fact[1000001];
void fun(){
    fact[0]=1;
    fact[1]=1;
    for(long long int i=2;i<=1000000;i++){
        fact[i]=i*fact[i-1];
        fact[i]%=M;
    }
}
int main() {
	// your code goes here
	fun();
	int t;cin>>t;
	while(t--){
	    long long int n;cin>>n;
	    long long int arr[n];long long int ans=0;
	    for(long long int i=0;i<n;i++){
	        cin>>arr[i];
	        ans+=fact[arr[i]];
	        ans%=M;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
