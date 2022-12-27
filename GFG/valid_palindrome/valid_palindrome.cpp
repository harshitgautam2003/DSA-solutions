class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string s1="";
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                s1+=s[i];
            }
        }
    
        int st = 0;
    int end = s1.length()-1;
    while(st <= end){
        
    if(s1[st] != s1[end])
        return false;
        
        st++;
        end--;
    }
   return true; 
}
   
};