class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;int j=0;
        sort(intervals.begin(),intervals.end());
        ans.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++){
            if(ans[j][1]<intervals[i][0]){
                ans.push_back(intervals[i]);
                j++;
            }
            else{
                ans[j][1]=max(intervals[i][1],ans[j][1]);
            }
        }
        return ans;
    }
};