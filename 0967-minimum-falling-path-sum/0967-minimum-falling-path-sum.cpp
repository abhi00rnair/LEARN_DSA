class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>dp(n,vector<int>(m,INT_MAX));
        for(int i=0;i<m;i++){
            dp[n-1][i]=matrix[n-1][i];
        }
        for(int i=n-2;i>=0;i--){
            for(int j=0;j<m;j++){
                int tp=INT_MAX,tr=INT_MAX,ts;
                if(j>0){tp=dp[i+1][j-1];}
                if(j!=m-1){tr=dp[i+1][j+1];}
                ts=dp[i+1][j];
                dp[i][j]=min({tp,ts,tr})+matrix[i][j];
            }
        }
        int rett=INT_MAX;
        for(int i=0;i<m;i++){
            rett=min(rett,dp[0][i]);
        }
        return rett;
    }

};