#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int a,b;cin>>a>>b;
	    int req=1;
	    while(a>=0&&b>=0){
	        if(req%2==1){
	            a-=req;
	            req++;
	        }
	        else{
	            b-=req;
	            req++;
	        }
	    }
	    if(a>=0)cout<<"Limak"<<endl;
	    if(b>=0)cout<<"Bob"<<endl;
	}
	return 0;
}
