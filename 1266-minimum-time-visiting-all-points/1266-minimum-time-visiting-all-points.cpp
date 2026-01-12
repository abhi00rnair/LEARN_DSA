class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int rett=0,n=points.size();
        for(int i=1;i<n;i++){
            int x=points[i][0];
            int y=points[i][1];
            int prev_x=points[i-1][0];
            int prev_y=points[i-1][1];
            int time_x=abs(x-prev_x);
            int time_y=abs(y-prev_y);
            rett=rett+max(time_x,time_y);
        }
        return rett;
    }
};