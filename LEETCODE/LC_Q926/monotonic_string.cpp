class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int n=s.size();int i=0;int one=0,zero=0;
        for(i;i<n;i++){
            if(s[i]=='0')one++;
            else{
                zero++;
                zero=min(zero,one);
            }
        }
        return min(one,zero);
    }
};