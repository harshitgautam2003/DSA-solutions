 static bool cmp(pair<int,int>a,pair<int,int>b){
        return a.second<b.second;
    }
    int activitySelection(vector<int> start, vector<int> end, int n){
        // Your code here
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            pair<int,int>p=make_pair(start[i],end[i]);
            v.push_back(p);
        }
        sort(v.begin(),v.end(),cmp);
        int e=-99;int ans=0;
        for(auto i:v){
            if(i.first>e){
                ans++;
                e=i.second;
            }
        }
        return ans;
    }