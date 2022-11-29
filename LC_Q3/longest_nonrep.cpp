class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ap[27]={0};int count=0;int ans=0;
        for(int i=0;i<s.size();i++){
            if((s[i]-'a')<0){
                ap[26]++;
                if(ap[26]>1){
                    if(count>ans){ans=count;}
                    count=1;
                }
                else count++;
                }
            else{
                ap[s[i]-'a']++;
                if(ap[s[i]-'a']>1){
                    if(count>ans){ans=count;}
                    int j=i-1;
                    count=1;
                    while(s[j]!=s[i]){
                       count++;j--; 
                    } 
                }
                else count++;
            }
        }
        if(count>ans)ans=count;
        return ans;
    }
};

////or better sol
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> ap(256, -1);
        int ans = 0, count = -1;
        for (int i = 0; i != s.length(); i++) {
            if (ap[s[i]] > count)
                count = ap[s[i]];
            ap[s[i]] = i;
            ans = max(ans, i - count);
        }
        return ans;
    }
};