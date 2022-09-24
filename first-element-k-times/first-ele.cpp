class Solution{
    public:
    
    int firstElementKTime(int a[], int n, int k)
    {
        int m=1e6+1;
        
        int arr[m+1]={0};
        
        int x=0;
        for(int i=0;i<n;i++){
            arr[a[i]]++;
            if(arr[a[i]]==k) { break;}
        }
        for(int i=0;i<n;i++){

            if(arr[a[i]]>=k){

                return a[i];

            }

        }

        return -1;
    }
};