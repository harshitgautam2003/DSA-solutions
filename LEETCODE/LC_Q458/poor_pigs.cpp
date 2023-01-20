class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        if(buckets==1)return 0;
        int ans=1;
        int x=(minutesToTest/minutesToDie)+1;int y=x;
        while(x<buckets){
            x=x*y;
            ans++;
        }
        return ans;
    }
};