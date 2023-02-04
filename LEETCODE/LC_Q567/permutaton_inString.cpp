class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size();int m =s2.size();
        sort(s1.begin(),s1.end());
        for(int i=0;i<=m-n;i++){
            int j=i+n;
            string h="";
            for(int k=i;k<j;k++){
                h+=s2[k];
            }
            sort(h.begin(),h.end());
            if(h==s1)return true;
        }
        return false;
    }
};