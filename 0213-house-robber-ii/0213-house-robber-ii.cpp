class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        vector<int>arr1(nums.begin(), nums.end()-1);
        vector<int>arr2(nums.begin()+1, nums.end());
        vector<int>dp1(nums.size(), -1);
        vector<int>dp2(nums.size(), -1);
        return max(func(arr1,0, dp1), func(arr2,0, dp2));
    }

    int func(vector<int>&nums, int i, vector<int>&dp){
        if(i>=nums.size()){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int tp=nums[i]+func(nums,i+2,dp);
        int tr=func(nums, i+1,dp);
        return dp[i]=max(tp,tr);
    }
};