class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int ans=0;int n=strs[0].size();
        int m=strs.size();
        cout<<n<<" "<<m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m-1;j++){
                if(strs[j][i]>strs[j+1][i]){
                    ans++;break;
                }
                else continue;
            }
        }
        return ans;
    }
};