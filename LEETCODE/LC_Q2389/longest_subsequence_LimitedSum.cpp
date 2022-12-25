class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<queries.size();i++){
            int sum=0;
            int j=0;
            for(;j<nums.size() && queries[i];j++){
                if(queries[i]<nums[j]) break;
                sum += nums[j];
                queries[i] -= nums[j];
            }
            queries[i] = j;
        }
        return queries;
    }
};