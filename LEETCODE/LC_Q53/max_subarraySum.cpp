class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=INT_MIN,h=0;
        for(int i=0;i<nums.size();i++){
            h+=nums[i];
            ans=max(ans,h);
            if(h<0)h=0;
        }
        return ans;
    }
};