class Solution {
public:
    string smallestSubsequence(string s) {
        vector <int> arr(26,0),chk(26,0);int n=s.size(); string ans="";
        for(int i=0;i<n;i++){
            arr[s[i]-'a']++;
        }
        for(int i=0;i<s.length();i++){
            arr[s[i]-'a']--;
            if(!chk[s[i]-'a']){
                while(ans.length()>0 && ans.back()>s[i] && arr[ans.back()-'a']>0){
                    chk[ans.back()-'a']=0;
                    ans.pop_back();
                }
                ans+=s[i];
                chk[s[i]-'a']=1;
            }
        }
        return ans;
    }
};