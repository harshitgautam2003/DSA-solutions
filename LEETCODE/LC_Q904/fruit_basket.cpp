class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int ans=0;
        for(int i=0;i<fruits.size();i++){
            set<int>s;int help=0;
            for(int j=i;j<fruits.size();j++){
                s.insert(fruits[j]);
                int t=s.size();
                if(t<=2){
                    help++;
                }
                else break;
            }
            ans=max(ans,help);
            if(ans==fruits.size())break;
            if(fruits.size()>100){
                if(ans==fruits.size()-2)break;
            }
        }
        return ans;
    }
};

//optimized solution->>
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> mp; 
        int i, j; 
        for (i = 0, j = 0; j < fruits.size(); ++j) {
            mp[fruits[j]]++; 
            if (mp.size() > 2) { 
                if (--mp[fruits[i]] == 0)mp.erase(fruits[i]);
                i++; 
            }
        }
        return j - i;
    }
};