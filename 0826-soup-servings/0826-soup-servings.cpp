class Solution {
public:
    double soupServings(int n) {
        if(n>=4800){
            return 1;
        }
        int m=(n+24)/25;
        vector<vector<double>>dp(m+1,vector<double>(m+1, -1));
        return func(m, m, dp);
    }
    double func(int n1, int n2, vector<vector<double>>&dp){
        if(n1<=0 && n2<=0){
            return 0.5;
        }
        if(n1<=0){
            return 1;
        }
        if(n2<=0){
            return 0;
        }
        if(dp[n1][n2]!=-1){
            return dp[n1][n2];
        }
        double rett=0.25*(
            func(n1-4,n2, dp)+ 
            func(n1-3, n2-1, dp)+ 
            func(n1-2, n2-2, dp)+
            func(n1-1,n2-3, dp)
            );
        return dp[n1][n2]=rett;
    }
};