class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int result=accumulate(nums.begin(), nums.end(), 0);
        if(result%2!=0){
            return false;
        }
        vector<vector<int>>dp(nums.size()+1, vector<int>(result+1, -1));
        return func(0,result/2, nums, dp);
    }

    bool func(int index, int target,vector<int>&nums,vector<vector<int>>&dp){
        if(target==0){
            return dp[index][target]=true;
        }
        if(index==nums.size()){
            return dp[index][target]=false;
        }
        if(dp[index][target]!=-1){
            return dp[index][target];
        }
        bool notake=func(index+1, target, nums, dp);
        bool take=false;
        if(target-nums[index]>=0){
            take=func(index+1, target-nums[index],nums, dp);
        }
        return dp[index][target]=notake | take;
    }
};