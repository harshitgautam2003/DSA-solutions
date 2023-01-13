class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) { 
        // code here 
        vector<string>ans;string t="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='.'){
                ans.push_back(t);
                t="";
            }
            else t+=s[i];
        }
        if(t!="")ans.push_back(t);
        reverse(ans.begin(),ans.end());
        t="";
        for(int i=0;i<ans.size()-1;i++){
            t+=ans[i]+".";
        }
        t+=ans[ans.size()-1];
        return t;
    } 
};