class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        if(dividend==0||divisor==1)return dividend;
        long long int n=dividend,d=divisor;
        int flag=true;
        if(n<0){
            flag=!flag;
            n*=-1;
        }
        if(d<0){
            flag=!flag;
            d*=-1;
        }int ans=0;
        while(n>=d){
            n-=d;
            ans++;
        }
      
        if(!flag)ans*=-1;
        return ans;
    }
};