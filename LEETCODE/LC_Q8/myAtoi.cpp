class Solution {
public:
    
    bool isNum(char a){
        if(a=='1'||a=='2'||a=='3'||a=='4'||a=='5'||a=='6'||a=='7'||a=='8'||a=='9'||a=='0')return true;
        return false;
    }
    int myAtoi(string s) {
        long long int ans=0;int sign=1;
        int j=0;
        while(j < s.size()) {
            if(s[j] == ' ') j++;   
            else break;       
        }
        if(s[j]=='-'){sign=-1;j++;}
        else if(s[j]=='+')j++;
        for(int i=j;i<s.size();i++){
           if(isNum(s[i])){
                ans=ans*10+(s[i]-'0');
                if(ans>=INT_MAX)break;
            }
            else break;
        }

        if(sign==-1)ans*=-1;
        if(ans>=INT_MAX)return INT_MAX;
        else if(ans<=INT_MIN)return INT_MIN;
        return ans;
    }
};