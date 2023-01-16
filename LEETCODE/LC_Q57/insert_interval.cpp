class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& interval, vector<int>& newInterval) {
        vector<vector<int>>ans;
        for(int i=0;i<interval.size();i++){
            if(newInterval[0]>interval[i][1])ans.push_back(interval[i]);
            else if(newInterval[1]<interval[i][0]){   
                ans.push_back(newInterval);
                newInterval=interval[i];
            }
            else{
                newInterval[0]=min(newInterval[0],interval[i][0]);
                newInterval[1]=max(newInterval[1],interval[i][1]);
            }
        }
        ans.push_back(newInterval);
        return ans;

    }
};