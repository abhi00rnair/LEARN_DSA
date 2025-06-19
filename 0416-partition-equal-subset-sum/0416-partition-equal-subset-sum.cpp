class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=0, n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        if(sum%2!=0){
            return false;
        }
        int target=sum/2;
        vector<vector<int>>dp(n,vector<int>(target+1, -1));
        return func(0,target,nums,n,dp);
    }
    bool func(int i,int target, vector<int>&nums, int n, vector<vector<int>>&dp){
        if(target==0){
            return true;
        }
        if(i>=n){
            return false;
        }
        if(dp[i][target]!=-1){
            return dp[i][target];
        }
        bool rett2=false;
        bool rett1=func(i+1, target, nums, n,dp);
        if(nums[i]<=target){
            rett2=func(i+1,target-nums[i], nums, n, dp);
        }
        return dp[i][target]=rett1 || rett2;

    }
};