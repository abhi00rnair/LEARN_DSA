class Solution {
public:
    long long maximumProfit(vector<int>& prices, int k) {
        vector<vector<vector<long long>>>dp(prices.size()+1, vector<vector<long long>>(k+1, vector<long long>(3, -4e18)));
        return func(prices,0,k,0,prices.size(),dp);
    }

    long long func(vector<int>&nums, int index, int k,int  state, int n,vector<vector<vector<long long>>>&dp){
        if(index>=n || k==0){
            return state==0? 0:-4e18;
        }
        long long tp=0;
        if(dp[index][k][state]!=-4e18){
            return dp[index][k][state];
        }
        if(state==0){
            tp=max({func(nums,index+1,k,0,n,dp), -nums[index]+func(nums, index+1,k,1,n,dp), nums[index]+func(nums, index+1,k,2,n,dp)});
        }else if(state==1){
            tp=max({func(nums, index+1,k,1,n,dp),nums[index]+func(nums, index+1, k-1,0,n,dp)});
        }else{
            tp=max({func(nums, index+1,k,2,n,dp), -nums[index]+func(nums , index+1, k-1,0,n,dp)});
        }
        return dp[index][k][state]=tp;
    }
};