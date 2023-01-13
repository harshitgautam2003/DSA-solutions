class Solution {
public:
    int maximum69Number (int num) {
        vector<int>ans;int t=num;
        while(t>0){
            ans.push_back(t%10);
            t/=10;
        }
        for(int i=ans.size()-1;i>=0;i--){
            if(ans[i]==6){ans[i]=9;break;}
        }
        t=0;
        for(int i=ans.size()-1;i>=0;i--){
            t=t*10+ans[i];
        }
        return t;
    }
};