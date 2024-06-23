class Solution {
public:
    int climbStairs(int n) {
        if (n == 1) return 1; // Handle the base case where n is 1
        
        vector<int> dp(n + 1, 0); // Create a dp array of size n+1 initialized to 0
        dp[0] = 1; // Base case: 1 way to stay at the ground
        dp[1] = 1; // Base case: 1 way to reach the first step
        
        for (int i = 2; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2]; // Number of ways to reach step i
        }
        
        return dp[n]; // Return the number of ways to reach the nth step
    }
};
