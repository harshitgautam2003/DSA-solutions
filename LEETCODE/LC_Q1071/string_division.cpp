// BRUTE FORCE SOLUTION BEATS 15%
class Solution {
public:
    string gcdOfStrings(string s1, string s2) {
        if(s2.size()>s1.size()){
            string temp=s1;
            s1=s2;
            s2=temp;
        }
        string x="";string ans="";
        for(int i=0;i<s2.size();i++){
            x+=s2[i];
            if(s1.size()%x.size()==0&&s2.size()%x.size()==0){
                int n=s1.size()/x.size();
                int m=s2.size()/x.size();
                string help1="",help2="";
                for(int i=0;i<n;i++){
                   help1+=x;
                }
                for(int i=0;i<m;i++){
                   help2+=x;
                }
                if(help1==s1&&help2==s2){
                   ans=x;
                } 
            }
            else continue;
        }
        return ans; 
    }
};


// OPTIMIZED SOLUTION
string gcdOfStrings(string str1, string str2) {
        if(str1 + str2 != str2 + str1)
            return "";
        int n= str1.size();
        int m= str2.size();
        int ans = gcd(n,m);
        return str1.substr(0, ans);
    }