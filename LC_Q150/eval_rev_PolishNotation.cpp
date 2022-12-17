class Solution {
public:
    bool isOperand(string a){
        if(a=="+"||a=="-"||a=="*"||a=="/")
        return true;
        return false;
    }
    int evalRPN(vector<string>& tokens) {
        stack <long long int> s;long long int ans=0;
        for(int i=0;i<tokens.size();i++){
            if(isOperand(tokens[i])){
                long long int a=s.top();
                s.pop();
                long long int b=s.top();
                s.pop();
                long long int c;
                if(tokens[i]=="+")c=b+a;
                else if(tokens[i]=="-")c=b-a;
                else if(tokens[i]=="*")c=b*a;
                else if(tokens[i]=="/")c=b/a;
                s.push(c);
            }
            else{
                long long int z=stoi(tokens[i]);
                s.push(z);
            }
        }
        ans=s.top();

        return ans;

    }
};