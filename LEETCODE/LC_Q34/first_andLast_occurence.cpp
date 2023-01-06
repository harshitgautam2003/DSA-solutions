class Solution {
public:
    int binary_search(vector<int>& nums,int s,int e,int target) {
        if(s<=e)
        {
            int mid=(s+e)/2;
            if(nums[mid]==target)
                return mid;
            else if(target>nums[mid])
                return binary_search(nums,mid+1,e,target);
            else
                return binary_search(nums,s,mid-1,target);            
        }
        return -1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0;int h=nums.size()-1;int m=-1;
        m=binary_search(nums,l,h,target);
        vector<int>ans(2,-1);
        if(m!=-1){
            ans[0]=m;
            ans[1]=m;
            while(m-1>=0 && nums[m-1]==target) ans[0]=--m;
            while(m+1<h+1 && nums[m+1]==target) ans[1]=++m;  
        }
        return ans;
    }
};