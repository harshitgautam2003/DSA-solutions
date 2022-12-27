class Solution {
public:
    int maxArea(vector<int>& height) {
        int a=0;int area=0;int n=height.size()-1;
        int i=0;
        while(i!=n){
            area=(n-i)*min(height[i],height[n]);
            if(area>a)a=area;
            if(height[i]<height[n])i++;
            else n--;
        }
        return a;
    }
};