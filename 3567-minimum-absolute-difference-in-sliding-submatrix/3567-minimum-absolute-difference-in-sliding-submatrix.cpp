class Solution {
public:
    vector<vector<int>> minAbsDiff(vector<vector<int>>& grid, int k) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>>rett(m-k+1, vector<int>(n-k+1,0));
        // return rett;
        for(int i=0;i<=m-k;i++){
            for(int j=0;j<=n-k;j++){
                vector<int>tp;
                for(int x=i;x<i+k;x++){
                    for(int y=j;y<j+k;y++){
                        tp.push_back(grid[x][y]);
                    }
                }
                int value=INT_MAX;
                sort(tp.begin(), tp.end());
                for(int z=1;z<tp.size();z++){
                    if(tp[z]!=tp[z-1]){
                    value=min(value, tp[z]-tp[z-1]);
                    }
                }
                if(value==INT_MAX){
                    rett[i][j]=0;
                }else{
                    rett[i][j]=value;
                }
            }
        }
        return rett;
    }
};