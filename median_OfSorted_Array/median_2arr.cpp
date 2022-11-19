class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans = 0;
        int i=0 , j=0 , m=nums1.size() , n=nums2.size();
        vector<int> temp;
        while(i<m && j<n){
            if(nums1[i]<nums2[j]) temp.push_back(nums1[i++]);
            
            else temp.push_back(nums2[j++]);    
        }
        if(i!=m) while(i<m)
            temp.push_back(nums1[i++]);
        else if(j!=n) while(j<n) 
            temp.push_back(nums2[j++]);
        if((m+n)%2 != 0) ans = temp[(m+n)/2];
        else ans = (temp[(m+n)/2] + temp[(m+n)/2-1])/2.0;
        return ans;
    }
};