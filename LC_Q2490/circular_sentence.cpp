class Solution {
public:
    bool isCircularSentence(string sentence) {
        int n=sentence.size();bool flag=false;
        if(sentence[0]==sentence[n-1])flag=true;
        else return false;
        for(int i=0;i<n;i++){
            if(sentence[i]==' '){
                if(sentence[i-1]==sentence[i+1]){flag=true;continue;}
                else {flag=false;break;}
            }
            else continue;
        }
        if(flag) return flag;
        else return false;
    }
};