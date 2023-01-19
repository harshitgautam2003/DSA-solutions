class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int ans=0;int help=0;int n=nums.size();
         vector<int> a(k,0);a[0]++;
        for(int i=0;i<n;i++){
            help=(help+nums[i]%k+k)%k;
            ans+=a[help];
            a[help]++;
        }
        return ans;
    }
};