    public:
    int maximizeSum(int a[], int n) 
    {
        // Complete the function
        int arr[100000]={0};
        for(int i=0;i<n;i++){
            arr[a[i]]++;
        }
        int sum=0;
        for(int i=99999;i>=0;i--){
            while(arr[i]>0){
                sum+=i;
                arr[i]--;
                arr[i-1]--;
            }
        }
        return sum;
    }
};