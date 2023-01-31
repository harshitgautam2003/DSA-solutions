class Solution {
public:
    string countAndSay(int n) {
        if(n==1)return "1";
        string ans="1";
        n--;
        while(n--){
            int freq=1;string help="";
            for(int i=0;i<ans.size();i++){
                if(ans[i]==ans[i+1])freq++;
                else {
                    help+=to_string(freq)+ans[i];
                    freq=1;
                }
            }
            ans=help;
        }
        return ans;
    }
};