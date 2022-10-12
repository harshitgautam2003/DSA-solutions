  public:
    int setBits(int N) {
        // Write Your Code here
        int temp;
        int count=1;
        if(N<2) return N;
        else{
           while(temp!=1){
               if(N%2!=0) count++;
               N=N/2;
               temp=N;
           }
            return count;
        }
    }
};