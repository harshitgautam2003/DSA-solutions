long long minCost(long long arr[], long long n) {
        // Your code here
        long long int ans=0;
        priority_queue<long long int,vector<long long int>,greater<long long int>> pq;
        for(int i=0;i<n;i++){
            pq.push(arr[i]);
        }
        while(pq.size()!=1){
            long long int f=pq.top();
            pq.pop();
            long long int s=pq.top();
            pq.pop();
            long long int m=f+s;
            ans+=m;
            pq.push(m);
        }
        return ans;
    }