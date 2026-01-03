class Solution {
public:
    int numOfWays(int n) {
        int mod=1e9+7;
        vector<vector<vector<vector<int>>>>dp(n, vector<vector<vector<int>>>(4, vector<vector<int>>(4, vector<int>(4, -1))));
        return func(0,n,0,0,0,mod,dp);
    }

    int func(int index, int n , int prev1, int prev2, int prev3, int mod,vector<vector<vector<vector<int>>>>&dp ){
        if(index>=n){
            return 1;
        }
        if(dp[index][prev1][prev2][prev3]!=-1){
            return dp[index][prev1][prev2][prev3];
        }
        int ans=0;
        for (int c1=1;c1<=3;c1++){
            if(c1==prev1){
                continue;
            }
            for (int c2=1;c2<=3;c2++){
                if(c2==c1 || c2==prev2){
                    continue;
                }
                for (int c3=1;c3<=3;c3++){
                    if(c3==c2 || c3==prev3){
                        continue;
                    }
                    ans=(ans+func(index+1,n, c1, c2, c3,mod, dp))%mod;
                }
            }
        }
        return dp[index][prev1][prev2][prev3]=ans;
        
    }
};