class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) {
            return nums[0];
        }
        
        vector<int> num1(nums.begin(), nums.end() - 1);
        vector<int> num2(nums.begin() + 1, nums.end());
        
        return max(func(num1), func(num2));
    }
    
    int func(vector<int>& num) {
        int n = num.size();
        if (n == 0) {
            return 0;
        }
        if (n == 1) {
            return num[0];
        }
        
        vector<int> dp(n, -1);
        dp[0] = num[0];
        dp[1] = max(num[0], num[1]);
        
        for (int i = 2; i < n; ++i) {
            dp[i] = max(dp[i - 1], num[i] + dp[i - 2]);
        }
        
        return dp[n - 1];
    }
};
