class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans= 0, n = nums.size();
        for (int i=0; i<n;i++) {
            if (i>0 && nums[i - 1] == nums[i]) continue;
            int j=i+1;
            while (j<n&& nums[j]-nums[i]<= 1)
                j++;
            if(nums[j-1]-nums[i]==1)
                ans=max(ans,j-i);
        }
        return ans;
    }
};