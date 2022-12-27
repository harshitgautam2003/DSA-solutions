
class Solution{
    public:
    int removals(vector<int>& arr, int k){
       sort(arr.begin(), arr.end());
      // we need a subarray with highest length and Amax-Amin<=K
      int i=0,j=0, n=arr.size();
      int m=0;
      while(j<n){
          if(arr[j] - arr[i] <= k){
              j++;
          }
          else{
              i++;
          }
          m=max(m, j-i);

      }

      return arr.size()- m;

    } 
};