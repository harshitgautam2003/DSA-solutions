class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();int j=0;
        for(int i=0;i<n;i++){
            nums[j++]=nums[i];
            if(nums[i]==val)j--;
        }
        return j;
    }    
};