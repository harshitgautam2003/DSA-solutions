#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n,y;cin>>n>>y;
	    vector <int> arr(n);
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int ans=0;
	    for(auto it:arr)ans=ans|it;
	    long long int a=ans^y;
	    if((a|ans)==y)cout<<a<<endl;
	    else cout<<-1<<endl;
	    
	}
	return 0;
}
