class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int rett=1;
        int n=points.size();
        for(int i=0;i<n;i++){
            unordered_map<double,int>mp;
            for(int j=i+1;j<n;j++){
                double slope;
                if(points[j][0]==points[i][0]){
                    slope=INT_MIN;
                }else{
                slope=(double)(points[j][1]-points[i][1])/(points[j][0]-points[i][0]);
                }
                mp[slope]++;
                rett=max(rett,mp[slope]+1);
            }
        }
        return rett;
    }
};