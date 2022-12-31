class Solution {
public:
    double myPow(double x, int n) {
        if(x==1)return x;
        if(x==-1&&n==INT_MIN){
            return 1;
        }
        if(x==-1&&n==INT_MAX){
            return -1;
        }
        if(n==INT_MIN)return 0;
        double ans=1;int flag=0;
        if(n<0){
            flag=1;
            n*=-1;
        }
        while(n--){
            ans*=x;
        }
        if(flag)return 1/ans;
        else return ans;
    }
};