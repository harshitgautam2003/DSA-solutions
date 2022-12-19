class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int>ans(3,0);
        for(int i=0;i<nums.size();i++){
            ans[nums[i]]++;
        }int j=0;int i=0;
        while(i<3){
            if(ans[i]>0){
                nums[j++]=i;
                ans[i]--;
            }
            else i++;
        }
    }
};