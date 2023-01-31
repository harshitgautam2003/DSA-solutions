class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        int n = scores.size();int dp[n], ans = 0;
        vector<pair<int, int>> st;
        for(int i = 0; i < n; i++) st.push_back({ages[i], scores[i]});
        sort(st.begin(), st.end());
        for(int i = 0; i < n; i++) {
            dp[i] = st[i].second;
            for(int j = 0; j < i; j++) {
                if(st[j].second <= st[i].second)
                    dp[i] = max(dp[i], dp[j] + st[i].second);
            }
            ans = max(ans, dp[i]);
        }
        return ans;  
    }
};