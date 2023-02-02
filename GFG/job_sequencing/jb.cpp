struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};

static bool cmp(Job a,Job b){
        return a.profit>b.profit;
    }
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        sort(arr,arr+n,cmp);
        int ded=-1;
        for(int i=0;i<n;i++){
            ded=max(ded,arr[i].dead);
        }
        int c=0,prfit=0;
        vector<int>days(ded+1,-1);
        for(int i=0;i<n;i++){
            for(int j=arr[i].dead;j>0;j--){
                if(days[j]==-1){
                    c++;
                    prfit+=arr[i].profit;
                    days[j]=arr[i].id;
                    break;
                }
            }
        }
        vector<int>ans;
        ans.push_back(c);
        ans.push_back(prfit);
        return ans;
    } 