
class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int> ans;
        ans.push_back(a[n-1]);
        
        int currMax = a[n-1];
        
        for(int i=n-2; i>=0; i--)
        {
            if(a[i] >= currMax)
            {
                currMax = a[i];
                ans.push_back(a[i]);
            }
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};