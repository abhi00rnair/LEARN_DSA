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
        int ta=0,tb=0,tc=0,tp=0,tr=0,ts=0,tx=0,ty=0,tz=0;
        if(j+1<m && k+1<m && j+1!=k+1){
            tp=grid[i][j]+grid[i][k]+func(grid,i+1,j+1,k+1,m,dp);
        }if(j+1<m && j+1!=k){
            tr=grid[i][j]+grid[i][k]+func(grid,i+1,j+1,k,m,dp);
        }if(j+1<m && k-1>=0 && j+1!=k-1){
            ts=grid[i][j]+grid[i][k]+func(grid,i+1,j+1,k-1,m,dp);
        }if(k+1<m && k+1!=j){
            ta=grid[i][j]+grid[i][k]+func(grid,i+1,j,k+1,m,dp);
        }if(k!=j){
            tb=grid[i][j]+grid[i][k]+func(grid,i+1,j,k,m,dp);
        }if(k-1>=0 && k-1!=j){
            tc=grid[i][j]+grid[i][k]+func(grid,i+1,j,k-1,m,dp);
        }if(j-1>=0 && k+1<m && k+1!=j-1){
            tx=grid[i][j]+grid[i][k]+func(grid,i+1,j-1,k+1,m,dp);
        }if(j-1>=0 && j-1!=k){
            ty=grid[i][j]+grid[i][k]+func(grid,i+1,j-1,k,m,dp);
        }if(j-1>=0 && k-1>=0 && k-1!=j-1){
            tz=grid[i][j]+grid[i][k]+func(grid,i+1,j-1,k-1,m,dp);
        }
        return dp[i][j][k]=max({ta,tb,tc,tp,tr,ts,tx,ty,tz});
    }
};