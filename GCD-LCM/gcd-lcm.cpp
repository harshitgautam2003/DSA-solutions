class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        if(A==0)return {B};
        if(B==0)return {A};
        long long x=A;
        long long y=B;
        while(x!=y){
            if(x>y) x-=y;
            else y-=x;
        }
        long long gcd=x;
        long long lcm=A*B/gcd; 
        return {lcm,gcd};
    }
};