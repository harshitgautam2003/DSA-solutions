
class Solution {
  public:




    int getMinDiff(int arr[], int n, int k) {
        // code here
        if(n==1)return 0;
        sort(arr,arr+n);


        int min1=arr[0]; int max1= arr[n-1];
        int diff = max1 - min1;
        for(int i=1;i<n;i++){
            if(arr[i]-k<0)continue;
        
            int max2=max(arr[i-1]+k,arr[n-1]-k);
            int min2=min(arr[0]+k,arr[i]-k);
        
            diff=min(diff,max2-min2);
    }
    return diff;
        
    }

};