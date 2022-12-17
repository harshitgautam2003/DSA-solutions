#include <iostream>
#include<string.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;cin>>n;
	    string s;
	    cin>>s;
	    int ans[26]={0};
	    for(int i=0;i<n;i++){
	        ans[s[i]-'a']++;
	    }
	    int flag=1;
	    for(int i=0;i<26;i++){
	        if(ans[i]%2 !=0){
	            flag=0;break;
	        }
	    }
	    if(flag)cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}