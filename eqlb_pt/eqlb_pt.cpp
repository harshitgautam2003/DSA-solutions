    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long arr[], int n) {
        // Your code here
        long long int  sum1=0;long long int sum2=0;
        for(int i=0; i<n;i++){
            sum1+=arr[i];
        }
        for(int i=0;i<n;i++){
            sum1-=arr[i];
            if(sum1==sum2)return i+1;
            sum2+=arr[i];
        }
        
    return -1;
    }

};