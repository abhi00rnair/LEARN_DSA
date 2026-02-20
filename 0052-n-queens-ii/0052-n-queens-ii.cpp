class Solution {
public:
    int totalNQueens(int n) {
        vector<vector<int>>dp(n+1, vector<int>(n+1,0));
        return func(0,n,dp);
    }

    bool safe(vector<vector<int>>&dp, int row, int colo, int n){
        for(int k=0;k<row;k++){
            if(dp[k][colo]==1){
                return false;
            }
        }
        for(int i=row-1,j=colo-1;i>=0 && j>=0;i--,j--){
            if(dp[i][j]==1){
                return false;
            }
        }
        for(int i=row-1,j=colo+1;i>=0 && j<n;i--,j++){
            if(dp[i][j]==1){
                return false;
            }
        }
        return true;
    }

    int func(int n, int m, vector<vector<int>>&dp){
        if(n==m){
            return 1;
        }
        int count=0;
        for(int i=0;i<m;i++){
            if(safe(dp,n,i,m)){
                dp[n][i]=1;
                count+=func(n+1,m,dp);
                dp[n][i]=0;
            }
        }
        return count;

    }
};