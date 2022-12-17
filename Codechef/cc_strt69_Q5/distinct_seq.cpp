#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	   int n;cin>>n;
	   string s;cin>>s;
	   int i,counter=1;
	   for(i=1;i<2*n;i++)
	       if(s[i]!=s[0]){
	           counter=0;break;
	       }
	   if(!counter){
	       cout<<1<<" ";
	       int a=n-1;int j=2;
	       while(a--){
	           if(j==i+1)a++;
	           else cout<<j<<" ";
	           j++;
	       }    
	   }
	   else cout<<-1;
	   cout<<endl;
	} 
	return 0;
}
