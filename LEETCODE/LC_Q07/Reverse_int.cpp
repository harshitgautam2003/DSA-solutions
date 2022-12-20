class Solution {
public:
    int reverse(int n) {
        long long rev=0; 
        while(n!=0){
            int temp = n%10;
            rev = rev*10+temp;
            if(rev>=INT_MAX || rev<=INT_MIN)  { 
                return 0;
            }
            n/=10;
        }
        int ans=rev;
        return ans;
    }
};