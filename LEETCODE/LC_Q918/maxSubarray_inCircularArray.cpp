class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int ans1=INT_MIN,ans2=INT_MAX,h1=0,h2=0,sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            h1+=nums[i];h2+=nums[i];
            ans1=max(h1,ans1);
            ans2=min(h2,ans2);
            if(h1<0)h1=0;
            if(h2>0)h2=0;
        }
        if(ans2==sum)return ans1;
        return max(ans1,sum-ans2);
    }
};