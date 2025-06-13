class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n=obstacleGrid.size();
        int m= obstacleGrid[0].size();
        if(obstacleGrid[0][0]==1){
            return 0;
        }
        vector<vector<int>>dp(n,vector<int>(m,-1));
        func(0,0,n,m,dp,obstacleGrid);
        return dp[0][0];
        
    }
    int func(int i, int j,int n, int m, vector<vector<int>>&dp,vector<vector<int>>&grid){
        if(i>=n || j>=m){
            return 0;
        }
        if(grid[i][j]==1){
            return 0;
        }
        if(i==n-1 && j==m-1){
            return dp[i][j]=1;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int tp=func(i+1,j,n,m,dp,grid);
        int tr=func(i,j+1,n,m,dp,grid);
        return dp[i][j]=tp+tr;

    }
};