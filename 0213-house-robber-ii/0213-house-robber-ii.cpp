class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return nums[0];
        }        
        vector<int>dp(n, -1);
        vector<int>dp2(n,-1);
        int fun1=func(nums,n-2,0,dp);
        int fun2=func(nums,n-1,1,dp2);
        return max(fun1, fun2);
        
    }
    int func(vector<int>&nums, int n ,int end, vector<int>&dp){
        if(n<end){
            return 0;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        return dp[n]=max(func(nums,n-1,end,dp), func(nums,n-2,end,dp)+nums[n]);
    }
};