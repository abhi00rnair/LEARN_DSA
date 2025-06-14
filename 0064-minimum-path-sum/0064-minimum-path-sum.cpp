class Solution {
public:
    int minPathSum(vector<vector<int>>& grid){
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return func(0,0,grid,n,m,dp);
        
    }
    int func(int i, int j , vector<vector<int>>&grid, int n , int m, vector<vector<int>>&dp){
        if(i>=n || j>=m){
            return INT_MAX;
        }
        if(i==n-1 && j==m-1){
            return grid[i][j];
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }

        return dp[i][j]=grid[i][j]+min(func(i+1,j,grid,n,m,dp),func(i,j+1,grid, n,m,dp));
    }
};