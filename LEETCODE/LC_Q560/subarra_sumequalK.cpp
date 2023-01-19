class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans=0;int help=0;int n=nums.size();
        unordered_map<int,int>a;a[0]++;
        for(int i=0;i<n;i++){
            help+=nums[i];
            ans+=a[help-k];
            a[help]++;
        }
        return ans;
    }
};