#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    string s1,s2;cin>>s1>>s2;
	    int x=0,y=0;
	    for(int i=0;i<n;i++){
	        if(s1[i]=='1')x++;
	        if(s2[i]=='1')y++;
	    }
	    if(x==y)cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}
