class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();int t;int maxi=-1;
        for(int i=n-1;i>=0;i--){
        t=arr[i];
        arr[i]=maxi;
        maxi=max(maxi,t);
    }
 return arr;
    }
};