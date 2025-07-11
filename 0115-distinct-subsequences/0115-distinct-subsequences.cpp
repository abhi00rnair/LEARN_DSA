class Solution {
public:
    int numDistinct(string s, string t) {
        int n=s.size();
        int m=t.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return func(s,t,0,n,0,m,dp);
    }

    int func(string&s, string&t, int i, int n,int j,int m,vector<vector<int>>&dp){
        if(j==m){
            return 1;
        }
        if(i>=n){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int tp=0,tr=0;
        if(s[i]==t[j]){
            tp=func(s,t,i+1,n,j+1,m,dp);
        }
            tr=func(s,t,i+1,n,j,m,dp);
        return dp[i][j]=tp+tr;
    }
};