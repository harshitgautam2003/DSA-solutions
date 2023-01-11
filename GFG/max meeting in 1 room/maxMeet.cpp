class Solution{
public:
    static bool cmp(pair<pair<int,int>,int>p1, pair<pair<int,int>,int>p2){
      if(p1.first.second==p2.first.second)
      return p1.second<p2.second;
      return p1.first.second<p2.first.second;
  }
    vector<int> maxMeetings(int n,vector<int> &S,vector<int> &F){
        vector<int>ans;
        vector <pair<pair<int,int>,int>>a;
        for(int i=0;i<n;i++){
            a.push_back({{S[i],F[i]},i+1});
        }
        sort(a.begin(),a.end(),cmp);
        ans.push_back(a[0].second);
        int prev=a[0].first.second;
        for(int i=1;i<n;i++){
            if(a[i].first.first>prev){
                ans.push_back(a[i].second);
                prev=a[i].first.second;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};