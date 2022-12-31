class Solution {
public:
    int mySqrt(int x) {
        int left = 0; int right = x;
        int mid=0;
        if(x<2)return x;
        while(left<=right){
            mid =left+ (right-left)/2;
            if(mid==x/mid)return mid;
            if(x/mid>mid)left = mid+1;
            if(mid>x/mid&&(mid-1)<x/(mid-1))return mid-1;
            if(x/mid<mid)right = mid-1;
        }
        return mid;
    }
};