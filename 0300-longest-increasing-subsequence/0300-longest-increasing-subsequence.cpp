class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return func(nums,-1,0,dp);
    }

    int func(vector<int>&nums,int previndex, int i,vector<vector<int>>&dp){
        if(i>=nums.size()){
            return 0;
        }
        int tp=previndex+1;
        if(dp[tp][i]!=-1){
            return dp[tp][i];
        }
        if(previndex==-1 || nums[previndex]<nums[i]){
            int pick=1+func(nums,i,i+1,dp);
            int nopick=func(nums,previndex,i+1,dp);
            return dp[tp][i]=max(pick,nopick);
        }else{
            return dp[tp][i]=func(nums,previndex,i+1,dp);
        }
    }
};