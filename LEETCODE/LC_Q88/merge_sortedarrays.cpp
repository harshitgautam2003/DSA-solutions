// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         int s=nums1.size();
//         if(s==1&&m==1)return;
//         int j=s-n;
//         for(int i=0;i<nums2.size()&&j<s;i++){
//             nums1[j]=nums2[i];
//             j++;
//         }
//         sort(nums1.begin(),nums1.end());
//     }
// };
//better solution
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1 , j=n-1 ;
        while(i>=0 && j>=0 ){
            if(nums1[i]>=nums2[j]){
                nums1[i+j+1]=nums1[i] ;
                i-- ;
                }else{
                    nums1[i+j+1]=nums2[j];
                    j-- ;
                }
        }
        while(j>=0){
            nums1[j]=nums2[j];
            j-- ;
        }
    }
};