class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size(), m=text2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1, -1));
        return func(0,0,text1, text2,n,m, dp);
        
    }
    int func(int i, int j, string&t1, string&t2, int n, int m, vector<vector<int>>&dp){
        if(i==n || j==m){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(t1[i]==t2[j]){
            return dp[i][j]=1+func(i+1, j+1, t1,t2, n, m, dp);
    }
        return dp[i][j]=max(func(i+1, j,t1,t2,n,m, dp), func(i, j+1, t1, t2, n,m, dp));
    }
};