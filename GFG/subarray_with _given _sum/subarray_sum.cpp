{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)

   {
       
       vector<int > v;
       if(s==0){
           return{-1};
       }

       int sum=0,i=0,j=0;

       while((i<n)&&(j<=n)){
           if(sum<s){
               sum=sum+arr[j];
               j++;
           }
           else if(sum>s){
               sum-=arr[i];
               i++;
           }
           else if(sum==s){
               v.push_back(i+1);
               v.push_back(j);
              return v; 
           }
       }
       v.push_back(-1);
       return v;

   }
};