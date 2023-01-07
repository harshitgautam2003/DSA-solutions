class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int g=0,c=0;
        int curr=0, ans=0;
        for(int i=0;i<cost.size();i++){
            g+=gas[i];c+=cost[i];
            curr+=gas[i]-cost[i];
            if(curr<0){
                ans=i+1;
                curr=0;
            }
        }
        if(g<c)return -1;
        return ans;
    }
};