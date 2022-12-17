#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    string s;
	    cin>>s;int a=s.size();
	    if(s[0]==s[a-1])cout<<a-2<<endl;
	    else cout<<2<<endl;
	    
	}
	return 0;
}
