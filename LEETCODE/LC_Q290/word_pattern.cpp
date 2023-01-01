
/*brute force
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int n=pattern.size();int m =s.size();
        vector<int>p(26,0),ss(26,0);
        for(int i=0;i<n;i++){
            p[pattern[i]-'a']++;
        }
        ss[s[0]-'a']++;
        for(int i=1;i<m;i++){
            if(s[i]==' '){
                ss[s[i+1]-'a']++;
            }
        }
        sort(p.begin(),p.end());
        sort(ss.begin(),ss.end());
        for(int i=0;i<26;i++){
            if(p[i]!=ss[i])return false;
        }
        return true;
    }
};
*/
 bool wordPattern(string pattern, string s) {

        unordered_map<char,string>mp;
        unordered_map<string,bool>visited;
        vector<string>wordList;

        stringstream st(s);

        string word;
        int count = 0;

        while(st>>word){
            count++;
            wordList.push_back(word);
        }
       if(pattern.size() != count){
            return false;
        }else{
            for(int i=0;i<pattern.size();i++){}
                 char c=pattern[i];
                 if(mp[c] == "" && visited[wordList[i]] == true ){
                     return false;
                 }

                else if(mp[c] == ""){
       mp[c] = wordList[i];
                     visited[wordList[i]] =true;
                 }else{
                     if(mp[c] != wordList[i]) return false;
                 }

            }

        }

        return true;

    }
