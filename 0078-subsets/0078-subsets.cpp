class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ret;
        int n=nums.size();
        vector<int>arr;
        func(nums,ret,arr,n,0);
        return ret;
    }
    
    void func(vector<int>&nums,vector<vector<int>>&ret,vector<int>&arr,int n, int i){
        if(i>=n){
            ret.push_back(arr);
            return;
        }
        arr.push_back(nums[i]);
        func(nums,ret,arr,n,i+1);
        arr.pop_back();
        func(nums,ret,arr,n,i+1);
    }
};