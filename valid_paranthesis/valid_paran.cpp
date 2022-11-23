class Solution {
public:
    bool isValid(string s) {
        int l = s.length();
        if (l%2!= 0) return false;
        
        stack<char> st;
        for (int i = 0; i <l; i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            } else {
                if (st.empty()) {
                    return false;
                } else if (st.top() =='(' && s[i] != ')' || st.top() =='{' && s[i] != '}'
                   || (st.top() =='[' && s[i] != ']')) {
                    return false;
                }
                st.pop();
            }
        }
        if(st.empty())return true;
        else return false;
    }
};