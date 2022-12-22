class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>ans;int counter=0;
        for(int i=0;i<n;i++){
            vector<int>t;
            for(int j=0;j<=i;j++){
                if(j==0||j==i){
                    t.push_back(1);
                }
                else{
                    t.push_back(ans[i-1][j-1]+ans[i-1][j]);
                }
            }
            ans.push_back(t);
        }
        return ans;
    }
};