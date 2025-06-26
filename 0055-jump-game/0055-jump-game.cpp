class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n, -1);
        return func(0,nums, n, dp);
        
    }
    bool func(int i, vector<int>&nums, int n, vector<int>&dp){
        if(i==n-1){
            return true;
        }
        if(i>=n){
            return false;
        }
                    if(dp[i]!=-1){
                return dp[i];
            }
        for(int j=1;j<=nums[i]; j++){
            if(i+j<n){
                dp[i]=func(i+j, nums, n, dp);
                if(dp[i]==1){
                    return true;
                }
            }
        }
    return dp[i]=false;
    }
};