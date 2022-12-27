class Solution {
public:
    int pivotInteger(int n) {
        int sum=n*(n+1)/2;int x=-1;
        for(int i=1;i<=n;i++){
            if(i*(i+1)-i==sum){
                x=i;break;
            }
        }
        return x;
    }
};