public:
	long long int NoOfChicks(int n){
	    // Code here
	    long long c=1;vector<long long int>ans;
	    ans.push_back(0);
	    ans.push_back(c);int i;
	    if(n==0||n==1)return n;
	    for(i=1;i<n;i++){
	        if(i>=5){
	            c=c-ans[i-5];
	        }
	        ans.push_back(c*2);
	        c=c+2*c;
	    }
	    return c;
	}
};