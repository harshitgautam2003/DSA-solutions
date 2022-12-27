class Solution {
public:
    char repeatedCharacter(string s) {
        vector<int> ans(26);
        for(char c:s){
            ans[c-'a']++;
            if(ans[c-'a']>1)return c;
        }
        return 'a';
    }
};