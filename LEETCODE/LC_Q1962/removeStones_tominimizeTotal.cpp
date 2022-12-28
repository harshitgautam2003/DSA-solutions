class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> p(piles.begin(),piles.end());
        for(int i=0;i<k;i++)
        {
            int t=p.top();
            p.pop();
            t=t-(t/2);
            p.push(t);
        }
        int ans=0;
        while(!p.empty())
        {
            ans+=p.top();
            p.pop();
        }
        return ans;
    }
};