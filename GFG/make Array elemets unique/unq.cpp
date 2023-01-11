class Solution {
  public:
    long long int minIncrements(vector<int> arr, int N) {
        // Code here
        sort(arr.begin(),arr.end());
        long long int ans=0;
        for(int i=1;i<N;i++){
            if(arr[i] <= arr[i-1]){
                int val = arr[i-1] - arr[i] + 1;
                ans+= val;
                arr[i] += val;
            }
        }
        return ans;
    }
};