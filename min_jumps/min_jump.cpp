
class Solution{
  public:
    int minJumps(int arr[], int n){

       vector<int> ans(n+1);
       int j=1;
       for(int i =0;i<n;i++){
           if(i>=j)return -1;
           while(i+arr[i]>=j && j <=n)ans[j++]=1+ans[i];
       }
      return ans[n-1];
    }
};