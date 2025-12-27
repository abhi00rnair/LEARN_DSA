class Solution {
public:
    int numSquares(int n) {
        vector<vector<int>>dp(105,vector<int>(n+1, -1));
        return func(1,n,dp);
    }
    int func(int index, int count,vector<vector<int>>&dp){
        if(count==0){
            return 0;
        }
        if(index*index>count){
            return 1e9;
        }
        if(dp[index][count]!=-1){
            return dp[index][count];
        }
        int temp=index*index;
        int pick=1+func(index,count-temp,dp);
        int nopick=func(index+1,count,dp);
        return dp[index][count]=min(pick,nopick);
    }
};