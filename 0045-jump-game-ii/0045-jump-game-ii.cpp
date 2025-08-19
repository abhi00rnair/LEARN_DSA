class Solution {
public:
    int jump(vector<int>& nums) {
        vector<int>dp(nums.size(), -1);
        return func(nums, 0, nums.size(), dp);
    }

    int func(vector<int>&nums, int i, int n, vector<int>&dp){
        if(i>=n-1){
            return 0;
        }if(nums[i]==0 || i>=n){
            return 1e9;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int rett=1e9;
        for(int j=1;j<=nums[i];j++){
            int tp=1+func(nums, i+j,n, dp);
            rett=min(rett, tp);
        }
        return dp[i]=rett;
    }
};