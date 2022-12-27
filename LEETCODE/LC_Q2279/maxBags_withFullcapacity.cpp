class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        vector<int>ans;
        for(int i=0;i<rocks.size();i++){
            ans.push_back(capacity[i]-rocks[i]);
        }
        sort(ans.begin(),ans.end());int a=0;
        for(int i=0;i<ans.size()&&additionalRocks;i++){
            if(ans[i]>additionalRocks)break;
            else{
                additionalRocks-=ans[i];
                a++;
            }
        }
        return a;
    }
};