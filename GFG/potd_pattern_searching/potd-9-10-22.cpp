	public:
		
		bool isPrime(int num){
   for(int i=2;i<num;i++){
         if(num%i==0)
          return false;
     }
   return true;
   }

 int NthTerm(int N){
     if(N<2)return 2-N;

     if(isPrime(N))
      return 0;
      
      int nextPrime=N;
      for(int i=0;i<100000;i++){
          nextPrime++;
          if(isPrime(nextPrime))
           break;
      }
      int previsPrime = N;

      for(int i=N;i>2;i--){
          previsPrime--;
          if(isPrime(previsPrime))
           break;
      }
    int ans = min(abs(N-previsPrime),abs(N-nextPrime));
    return ans;
	}

};