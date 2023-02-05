//brute force
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>v1(26,0);vector<int>ans;
        if(s.size()<p.size())return ans;
        for(int i=0;i<p.size();i++){
            v1[p[i]-'a']++;
        }

        for(int i=0;i<=s.size()-p.size();i++){
            int j=i+p.size();vector<int>v2(26,0);
            bool flag=true;
            for(int k=i;k<j;k++){
                v2[s[k]-'a']++;
            }
            if(v1==v2)ans.push_back(i);
        }
        return ans;
    }
};


///optimized
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>v1(26,0),v2(26,0);vector<int>ans;
        if(s.size()<p.size())return ans;
        for(int i=0;i<p.size();i++){
            v1[p[i]-'a']++;
        }
        for(int i=0;i<s.size();i++){
            v2[s[i]-'a']++;
            if(i>=p.size())v2[s[i-p.size()]-'a']--;
            if(v1==v2)ans.push_back(i-p.size()+1);
        }
        return ans;
    }
};