class Solution {
public:
    int cherryPickup(vector<vector<int>>& grid) {
        int m=grid[0].size();
        vector<vector<vector<int>>>dp(grid.size(), vector<vector<int>>(m,vector<int>(m,-1)));
        return func(grid,0,0,m-1,m,dp);
    }
    int func(vector<vector<int>>&grid,int i, int j, int k,int m,vector<vector<vector<int>>>&dp){
        if(i>=grid.size()){
            return 0;
        }
        if(dp[i][j][k]!=-1){
            return dp[i][j][k];
        }
        int rett=0;
        int curr=grid[i][j]+grid[i][k];
        for(int x=-1;x<2;x++){
            for(int y=-1;y<2;y++){
                if(j+x>=0 && j+x<m && k+y>=0 && k+y<m && j+x!=k+y){
                    rett=max(rett,(curr+func(grid,i+1,j+x,k+y,m,dp)));
                }
            }
        }
        return dp[i][j][k]=rett;
    }
};