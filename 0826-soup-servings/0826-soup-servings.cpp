class Solution {
public:
    double soupServings(int n) {
        vector<vector<double>>dp(4801,vector<double>(4801, -1));
        return func(n, n, dp);
    }
    double func(int n1, int n2, vector<vector<double>>&dp){
        if(n1<=0 && n2<=0){
            return 0.5;
        }
        if(n1<=0 || ( n1>=4800 && n2>=4800)){
            return 1;
        }
        if(n2<=0){
            return 0;
        }
        if(dp[n1][n2]!=-1){
            return dp[n1][n2];
        }
        double rett=0.25*(
            func(n1-100,n2-0, dp)+ 
            func(n1-75, n2-25, dp)+ 
            func(n1-50, n2-50, dp)+
            func(n1-25,n2-75, dp)
            );
        return dp[n1][n2]=rett;
    }
};