class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>rett;
        vector<int>temp;
        int n=candidates.size();
        func(rett,temp,candidates,n,0,target);
        return rett;
    }
    void func(vector<vector<int>>&rett,vector<int>&temp,vector<int>&nums, int n, int i, int target){
        if(target==0){
            rett.push_back(temp);
            return;
        }
        if(i==n || target<0){
            return;
        }
        temp.push_back(nums[i]);
        target-=nums[i];
        func(rett,temp,nums,n,i,target);
        temp.pop_back();
        target+=nums[i];
        func(rett,temp,nums,n,i+1,target);

    }
};