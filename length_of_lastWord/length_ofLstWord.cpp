class Solution {
public:
    int lengthOfLastWord(string s) {
        int max;int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                if(count!=0)
                max=count;
                count=0;
            }
            else{
                count++;
            }
        }
        if(count>0)max=count;
        return max;
    }
};