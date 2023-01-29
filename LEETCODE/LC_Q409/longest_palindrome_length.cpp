class Solution {
public:
    int longestPalindrome(string s) {
        int ans=0;
        unordered_map<int,int>a;int n=s.size();bool flag=false;
        for(int i=0;i<n;i++){
            a[s[i]]++;
        }
        for(auto i:a){
            if(i.second%2==1){
                ans+=i.second-1;
                flag=true;
            }
            else ans+=i.second;
        }
        if(flag)ans++;
        return ans;
    }
};