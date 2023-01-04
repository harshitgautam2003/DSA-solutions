class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        int i=0;int ans=0;int n=tasks.size();int c=1;
        if(n==1)return -1;
        sort(tasks.begin(),tasks.end());
        while(i!=n-1){
            if(tasks[i]==tasks[i+1]){
                c++;i++;
            }
            else{
                if(c<2)return -1;
                else{
                    ans+=(c+2)/3;
                    c=1;
                    i++;
                }
            }
        }
        if(c<2)return -1;
        if(c>=2)ans+=(c+2)/3;
        return ans;
    }
};