class Solution {
public:
    int numTilings(int n) {
        if(n==1||n==2)return n;
        int first = 0, second = 1, ans = 1, counter;n--;
        while (n--) {
            counter = ((ans * 2)%1000000007 + first) % 1000000007;
            first = second;
            second = ans;
            ans = counter;
        }
        return ans;
    }
};