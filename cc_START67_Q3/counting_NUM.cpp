#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	     int n; cin>>n;
	     int arr[n]; int sum=0;long long int ev=0;
	    for(long long int i=0;i<n;i++){
	        cin>>arr[i];
	        if(arr[i]%2)ev++;
	        sum+=arr[i];
	    }
	    if(ev%2||ev==0)cout<<"NO"<<endl;
	    else cout<<"YES"<<endl;
	}
	return 0;
}
