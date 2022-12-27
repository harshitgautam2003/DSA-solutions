    public:
    long long int minValue(int a[], int b[], int n)
    {
        // Your code goes here
          sort(a,a+n);
          sort(b,b+n);
           int l = n;
            long long int sum=0;
           int i=0;
           while (i < n){
               sum = b[i] * a[l - 1] + sum;
               l--;
               i++;
            }
             return sum;
    }
};