class Solution
{
    public:
    static bool cmp(pair<double,Item> a,pair<double,Item> b){
        return a.first>b.first;
    }
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        vector<pair<double,Item>>a;
        for(int i=0;i<n;i++){
            double x=(1.0*arr[i].value)/arr[i].weight;
            pair<double,Item> p=make_pair(x,arr[i]);
            a.push_back(p);
        }
        sort(a.begin(),a.end(),cmp);
        double ans=0;
        for(int i=0;i<n&&W;i++){
            if(a[i].second.weight>W){
                ans+=a[i].first*W;
                W=0;
            }
            else {
                ans+=a[i].second.value;
                W-=a[i].second.weight;
            }
        }
        return ans;
        
    }
        
};