class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        int mx=1;
        int start=0;
        for(int i=1;i<=n;i++){
            int l=i-1;
            int r=i;
            while(l>=0 && r<n && s[l]==s[r]){
                if(r-l+1>mx){
                    mx=r-l+1;
                    start=l;
                }
                l--;
                r++;
            }
            l=i-1;
            r=i+1;
            while(l>=0 && r<n && s[l]==s[r]){
                if(r-l+1>mx){
                    mx=r-l+1;
                    start=l;
                }
                l--;
                r++;
            }
        }
        return s.substr(start,mx);
    }
};