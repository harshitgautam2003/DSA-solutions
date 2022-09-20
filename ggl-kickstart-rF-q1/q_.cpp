#include<iostream>
using namespace std;

int main(){
    int t;cin>>t;
    for(int i=1;i<=t;i++){
        int n,a;cin>>n;
        a=n/5+1;
        if(n%5==0) a-=1;
        else{
            n=1;
        }
        cout<<"Case #"<<i<<": "<<a<<endl;
    }
}