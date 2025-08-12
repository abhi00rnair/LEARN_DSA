class Solution {
public:
    int numberOfWays(int n, int x) {
        vector<vector<int>>dp(n+1, vector<int>(n+1, -1));
        return func(1,x,n, 1e9+7, dp);              
    }

    int func(int i, int x, int n, int mod, vector<vector<int>>&dp){
        if(n==0){
            return 1;
        }
        if(i>n || n<0){
            return 0;
        }
        if(dp[i][n]!=-1){
            return dp[i][n];
        }
        long long temp=powerfinder(i,x,n);
        int tp=func(i+1,x,n-temp, mod, dp);
        int tr=func(i+1,x, n, mod, dp);
        return dp[i][n]=(tp+tr)%mod;
    }
    long long powerfinder(int i, int x, int n){
        long long temp=1;
        for(int j=0;j<x;j++){
            temp*=i;
            if(temp>n){
                return n+1;
            }
        }
        return temp;
    }
};