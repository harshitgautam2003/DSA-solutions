class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        int n=t.size();
        vector<int>ans(n,0);
        for(int i=0;i<n-1;i++) {
            if(t[i] < t[i+1]) {
                int j = i;
                while(j >= 0 && t[j] < t[i+1]){
                     if(ans[j--] == 0) ans[j+1] = i - j;
                }
            }
        }
        return ans; 
    }
};