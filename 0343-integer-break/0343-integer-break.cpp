class Solution {
public:
    int integerBreak(int n) {
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return func(n,n,1,dp);
    }
    int func(int curr, int n, int index,vector<vector<int>>&dp){
        if(curr<=0 || index>n){
            return 1;
        }
        if(dp[curr][index]!=-1){
            return dp[curr][index];
        }
        int maxxi=0;
        if(curr>=index && index!=n){
            int take=index*func(curr-index,n,index+1,dp);
            int nottake=func(curr,n, index+1,dp);
            int take_2=index*func(curr-index,n,index,dp);
            maxxi=max({take,nottake,take_2});
        }
        return dp[curr][index]=maxxi;
    }
};