class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
        return func(nums,n-1,dp);

    }
    int func(vector<int>&nums, int n,vector<int>&dp){
        if(n==0){
            return  nums[n];
        }
        if(n<0){
            return 0;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        int pick=nums[n]+func(nums,n-2,dp);
        int nopick=0+func(nums,n-1,dp);
        return dp[n]=max(pick,nopick);
    }
};