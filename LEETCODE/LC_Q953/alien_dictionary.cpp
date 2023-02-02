class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
    vector<int>od(26,0);
    for(int i=0;i<order.size();i++){
        od[order[i]-'a']=i;
    }
    for(int i=0;i<words.size()-1;i++){
        int len = min(words[i].size(), words[i+1].size());
        for(int j=0;j<len;j++){
            if(words[i][j] == words[i+1][j]) continue;
            if(od[words[i][j]-'a'] > od[words[i+1][j]-'a']) return false;
            break;
        }
        if(words[i].size() > words[i+1].size() && words[i].substr(0, len) == words[i+1]) return false;
    }
    return true;
}
};