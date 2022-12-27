class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int count=0;int max=0;if(nums.size()==0)return 0;
        sort(nums.begin(),nums.end());nums.push_back(-999);
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]==nums[i])continue;
            if(nums[i+1]==nums[i]+1)count++;
            else{
                if(count>max)max=count;
                count=0;
            }
        }
        for(int i=0;i<nums.size();i++){
            cout<<nums[i];
        }
        max++;
        return max;
    }
};