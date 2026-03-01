class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        int n=dungeon.size(),m=dungeon[0].size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return func(dungeon,0,0,n,m,dp);
    }

    int func(vector<vector<int>>&grid, int row, int colo, int n, int m,vector<vector<int>>&dp){
        if(row>=n || colo>=m){
            return INT_MAX;
        }
        if(row==n-1 && colo==m-1){
            return dp[row][colo]=max(1,1-grid[row][colo]);
        }
        if(dp[row][colo]!=-1){
            return dp[row][colo];
        }
        int tp=func(grid,row+1,colo,n,m,dp);
        int tr=func(grid,row, colo+1,n,m,dp);
        int rett=min(tp,tr)-grid[row][colo];
        return dp[row][colo]=max(1,rett);
    }
};