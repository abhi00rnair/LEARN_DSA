class Solution {
public:
    int lengthOfLongestSubsequence(vector<int>& nums, int target) {
        vector<vector<int>>dp(nums.size(), vector<int>(target+1,-1));
        int rett=func(nums,target,0,0,dp);
        if(rett>0){
            return rett;
        }return -1;
    }
    int func(vector<int>&nums , int target, int i, int tempsum, vector<vector<int>>&dp){
        if(tempsum==target){
            return 0;
        }
        if(i>=nums.size()){
            return INT_MIN;
        }
        if(dp[i][tempsum]!=-1){
            return dp[i][tempsum];
        }
        int tp=tempsum+nums[i];
        if(tp<=target){
            int pick=1+func(nums,target,i+1,tp,dp);
            int noo=func(nums,target,i+1,tempsum,dp);
            return dp[i][tempsum]=max(pick,noo);
        }else{
            return dp[i][tempsum]=func(nums,target,i+1,tempsum,dp);
        }

    }
};