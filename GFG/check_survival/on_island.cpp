int minimumDays(int s, int n, int m){
        if(m>n)return -1;
        // code here
        int a=s*m;
        int b=s/7;
        int c=s-b;
        int d=c*n;
        if(d<a)return -1;
        if(a%n==0)return a/n;
        else return a/n+1;
        
    }