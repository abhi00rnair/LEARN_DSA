class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        return func(0,n,nums,target);
        
    }
    int func(int i, int n, vector<int>&nums, int target){
        if(i>=n){
            if(target==0){
                return 1;
            }return 0;
        }
    int tp1=func(i+1,n,nums, target+nums[i]);
    int tp2=func(i+1, n, nums, target-nums[i]);
    return tp1+tp2;
    }

};