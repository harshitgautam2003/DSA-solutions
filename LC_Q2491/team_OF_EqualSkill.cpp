class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());long long int n=skill.size();long long int sum=skill[0]+skill[n-1];
        for(int i=0;i<n/2;i++){
            if(skill[i]+skill[n-i-1]!=sum)return -1;
        }
        long long int product=0;
        for(int i=0;i<n/2;i++){
            product+=skill[i]*skill[n-i-1];
        }
        return product;
    }
};