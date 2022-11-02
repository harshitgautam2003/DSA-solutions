#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int a,b,c;cin>>a>>b>>c;
	    if(b%c==0)
	    cout<<a*(b/c)<<endl;
	    else cout<<a*(b/c+1)<<endl;
	}
	return 0;
}
