class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int ans = 1;
        sort(points.begin(),points.end());
        int one= points[0][0];
        int two = points[0][1];

        for(int i=1;i<points.size();i++){
            
            if(points[i][0]<=two && points[i][1]>=one){
                one = max(points[i][0],one);
                two = min(points[i][1],two);
            }
            else{
                ans++;
                one = points[i][0];
                two = points[i][1];
            }
            
        }
        return ans;
    }
};