class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr1[26]={0};
        if(s.length() !=t.length())return false;
        for(int i=0;i<s.length();i++){
            arr1[s[i]-'a']++;
            arr1[t[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(arr1[i]!=0)return false;
        }
        return true;
    }
};



//OR WE CAN SORT THE STRINGS AND COMPARE ALSO.I have written that code below
bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t) return true;
        else return false;      
    }
