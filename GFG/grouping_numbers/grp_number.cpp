
class Solution {
  public:
    int maxGroupSize(int arr[], int N, int k) {
        // code here
        map<int, int>ma;
        for(int i=0; i<N; i++){
            ma[arr[i]%k]++;
        }
        int low=1;
        int high=k-1;
        int ans = 0;
        while(low<=high){
            if(low==high and ma[low]>0){
                ans++;
                break;
            }
            ans+=max(ma[low],ma[high]);
            low++;
            high--;
        }
        if(ma[0]>0){
            ans++;
        }
        return ans;
    }
};