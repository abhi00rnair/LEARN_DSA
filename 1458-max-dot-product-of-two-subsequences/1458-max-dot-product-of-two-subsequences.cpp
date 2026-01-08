class Solution {
public:
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>dp(nums1.size(),vector<int>(nums2.size(), INT_MIN));
        return func(0,0,nums1, nums2,dp);
    }

    int func(int i, int j, vector<int>&nums1, vector<int>&nums2, vector<vector<int>>&dp){
        if(i>=nums1.size() || j>=nums2.size()){
            return INT_MIN;
        }
        if(dp[i][j]!=INT_MIN){
            return dp[i][j];
        }
        int sum=nums1[i]*nums2[j];
        int take=sum+max(0,func(i+1, j+1, nums1, nums2,dp));
        int nottake_1=func(i+1,j,nums1,nums2,dp);
        int nottake_2=func(i,j+1,nums1, nums2,dp);
        return dp[i][j]=max({take,nottake_1, nottake_2});
    }
};