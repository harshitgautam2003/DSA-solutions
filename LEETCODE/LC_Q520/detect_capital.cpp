class Solution {
public:
    bool detectCapitalUse(string word) {
        string s=word;string s1=word;
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
        if(s==word||s1==word)return true;int flag=1;
        if(s[0]==word[0]){
            for(int i=1;i<word.size();i++){
                if(s[i]==word[i]){
                    flag=0;
                }
            }
            if(flag)return true;
            return false;
        }
        return false;
        
    }
};