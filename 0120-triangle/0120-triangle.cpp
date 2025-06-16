class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        int m=triangle[n-1].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return func(0,0,triangle,dp,n);
    }
    int func(int i,int j,vector<vector<int>>&triangle, vector<vector<int>>&dp, int n){
        if(i>=n){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int indexi=func(i+1,j,triangle,dp,n);
        int index1=func(i+1,j+1,triangle,dp,n);
        return dp[i][j]=min(indexi,index1)+triangle[i][j];
    }
};