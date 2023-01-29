class Solution {
public:
   void help(int i , string &digits ,unordered_map<char,string> &mp , vector<string> &ans , string &temp)
   {
       if( i == digits.size() && temp != "") 
       { ans.push_back(temp);}

        for( auto x : mp[digits[i]])
        {
            temp.push_back(x);
            help(i+1,digits,mp,ans,temp);
            temp.pop_back();
        }
   }
    vector<string> letterCombinations(string digits) {
        unordered_map<char,string> mp;        
        mp['2']="abc";
        mp['3']="def";
        mp['4']="ghi";
        mp['5']="jkl";
        mp['6']="mno";
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";
        vector<string> ans;
        string temp="";
        help(0,digits,mp,ans,temp);
        
        return ans;
    }
};