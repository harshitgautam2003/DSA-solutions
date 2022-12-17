class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n1=word1.size(),n2=word2.size();
        if(n1!=n2)return false;
        vector <int>v1(26,0),v2(26,0);
        for(int i=0;i<n1;i++){
            v1[word1[i]-'a']++;
            v2[word2[i]-'a']++;
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        if(set(word1.begin(),word1.end())!=set(word2.begin(),word2.end()))
            return false;
        if(v1==v2)return true;
        return false;
    }
};