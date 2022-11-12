#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;string s;cin>>s;
	    bool flag=true;int a=n/2;
	    for(int i=0;i<n/2;i++){
	        if(s[i]==s[i+a]){
	            flag=true;
	        }
	        else {
	            flag=false;
	            break;
	        }
	    }
	    if(flag==true)cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}
