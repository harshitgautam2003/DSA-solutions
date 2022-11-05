class Solution {
  public:
    int checkBaseEquivalence(int n, int a){
        int count = 0;
        while(n>0){
            count+=1;
            n=n/a;
        }
        return count;
    }
    string baseEquiv(int n, int m){
        for(int i=2;i<=32;i++){
            if(checkBaseEquivalence(n,i)==m){

                return "Yes";
            }
        }
        return "No";
    }
};