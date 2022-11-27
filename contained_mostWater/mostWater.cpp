class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0;int area=0;int n=height.size()-1;
        int i=0;
        while(i!=n){
            area=(n-i)*min(height[i],height[n]);
            if(area>ans)ans=area;
            if(height[i]<height[n])i++;
            else n--;
        }
        return ans;
    }
};